#pragma once

#include "map/Map.hpp"
#include "GameState.hpp"
#include "model/GameConfig.hpp"
#include <set>
#include <string>
#include <tuple>
#include <vector>

struct CollectionEvent {
    int step, agent, spot, brand;
};

struct RefuelEvent {
    int step, patrol, supply, pos, fuelBefore, fuelAfter;
};

struct DaySimulation {
    bool valid = false;
    std::string error;
    std::vector<Agent> agents;
    // Fuel after arrivals and refueling; [agent][0] is the supplied initial fuel.
    std::vector<std::vector<int>> fuelAtTime;
    std::vector<std::vector<int>> positionsAtTime; // Same step boundaries as fuelAtTime.
    std::vector<int> remainingStock;
    std::vector<long long> roadOccupancy; // Post-step positions, boundaries 1..daySteps.
    std::vector<CollectionEvent> collections;
    std::vector<RefuelEvent> refuelEvents;
    std::set<int> brands;
    int refuels = 0; // Only events that increase fuel.
};

struct MatchScore {
    std::set<int> brands;
    int dailyTypes = 0;
    int servings = 0;
    void add(const DaySimulation& day) {
        if (!day.valid) return;
        brands.insert(day.brands.begin(), day.brands.end());
        dailyTypes += static_cast<int>(day.brands.size());
        servings += static_cast<int>(day.collections.size());
    }
    auto rank() const {
        return std::make_tuple(static_cast<int>(brands.size()), dailyTypes, servings);
    }
};

/**
 * @brief Kết quả sau khi mô phỏng 1 đoạn di chuyển.
 */
struct SimResult {
    std::vector<int> actions;  // Chuỗi hành động (directions + waits)
    Position finalPos;         // Vị trí cuối cùng sau di chuyển
    int stepsUsed = 0;         // Tổng số bước đã tiêu tốn
    int fuelUsed = 0;          // Tổng xăng đã tiêu tốn
};

/**
 * @brief Mô phỏng di chuyển trên bản đồ.
 *
 * Module này chịu trách nhiệm DUY NHẤT: biến danh sách hướng đi (từ PathFinder)
 * thành chuỗi hành động hợp lệ, đồng thời tính toán vị trí + xăng sau di chuyển.
 */
class MoveSimulator {
public:
    // One team's clock and stock. Traffic is copied from state; opponents affect
    // future traffic, not this team's stock or refueling. Arrival fuel is charged
    // before refueling at every completed step, including the final boundary.
    // Collect at day start and arrivals; ties use agent-index order.
    static DaySimulation simulateDay(
        const GameConfig& config, const GameState& state,
        const std::vector<std::vector<int>>& actions, const Map& map);

    // Occupancy totals across ALL teams for the last two completed days.
    // An empty previousDay represents the first day. Throws on invalid inputs.
    static std::vector<Traffic> nextTraffic(const GameConfig& config,
        const std::vector<long long>& previousDay,
        const std::vector<long long>& currentDay);
    /**
     * @brief Biến path directions -> chuỗi hành động + mô phỏng kết quả.
     *
     * Duyệt từng hướng đi, kiểm tra xăng/bước, tạo actions và cập nhật
     * vị trí/xăng cuối cùng sau di chuyển.
     *
     * @param pathDirs       Mảng hướng đi từ PathFinder (VD: [2, 3, 4])
     * @param map            Bản đồ (tra cứu travel time, fuel cost)
     * @param startPos       Toạ độ xuất phát
     * @param maxSteps       Số bước tối đa cho phép
     * @param availableFuel  Xăng hiện có
     * @param isPatrol       true = xe Patrol (tốn xăng), false = xe Supply
     * @return SimResult chứa actions, vị trí cuối, steps/fuel đã dùng
     */
    static SimResult simulate(
        const std::vector<int>& pathDirs,
        const Map& map,
        Position startPos,
        int maxSteps,
        int availableFuel,
        bool isPatrol
    );

    /**
     * @brief Thêm hành động "Chờ" vào cuối chuỗi actions cho đủ daySteps.
     *
     * @param actions    [IN/OUT] Chuỗi hành động sẽ được thêm Wait vào cuối
     * @param stepsUsed  Tổng bước đã dùng
     * @param daySteps   Tổng bước yêu cầu của ngày
     */
    static void padWithWait(
        std::vector<int>& actions,
        int stepsUsed,
        int daySteps
    );
};
