#include <fstream>
#include <iostream>
#include <cassert>
#include <nlohmann/json.hpp>
#include "io/JsonReader.hpp"
#include "solver/Solver.hpp"
#include "solver/MoveSimulator.hpp"
using nlohmann::json;
int main(){
 auto c=JsonReader::readGameConfig(); Map map(c.map.height,c.map.width,c.map.cells);
 std::ifstream f("HexaUdon/.build/review_ef_diary.json"); json days; f>>days;
 Solver solver; MatchScore score; std::vector<long long> previous; std::vector<Traffic> traffic;
 for(auto& d:days){ GameState s{}; s.day=d["day"]; s.traffics=traffic; for(auto&a:d["agents"])s.agents.push_back({a["kind"],a["pos"],a["fuel"]});
 auto a=d["actions"].get<std::vector<std::vector<int>>>(); auto sim=MoveSimulator::simulateDay(c,s,a,map); assert(sim.valid);
 if(s.day<6)for(int i=0;i<8;i++){ assert(sim.agents[i].pos==days[s.day+1]["agents"][i]["pos"]); assert(sim.agents[i].fuel==days[s.day+1]["agents"][i]["fuel"]); }
 auto replanned=solver.solve(c,s,map); std::cout<<"day="<<s.day<<" brands="<<sim.brands.size()<<" servings="<<sim.collections.size()<<" actions_identical="<<(a==replanned)<<"\n"; solver.commitLastPlan(); score.add(sim);
 traffic=MoveSimulator::nextTraffic(c,previous,sim.roadOccupancy); previous=sim.roadOccupancy;
 }
 std::cout<<"score="<<score.brands.size()<<"/"<<score.dailyTypes<<"/"<<score.servings<<"\n";
 AgentStrategy::decideAgentTypes(c);
}
