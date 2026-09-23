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
 std::ifstream f("HexaUdon/.build/test42_current.json"); json data; f>>data;
 for(bool recorded:{true,false}){
 GameState s{}; for(auto&a:data["days"][0]["agents"])s.agents.push_back({a["kind"],a["pos"],a["fuel"]});
 Solver solver; MatchScore score; std::vector<long long> previous;
 for(int d=0;d<7;d++){
 s.day=d; auto actions=recorded?data["days"][d]["actions"].get<std::vector<std::vector<int>>>():solver.solve(c,s,map);
 auto result=MoveSimulator::simulateDay(c,s,actions,map); assert(result.valid);
 if(recorded && d<6)for(int i=0;i<8;i++){assert(result.agents[i].pos==data["days"][d+1]["agents"][i]["pos"]);assert(result.agents[i].fuel==data["days"][d+1]["agents"][i]["fuel"]);}
 score.add(result);std::cout<<(recorded?"recorded":"rollout")<<" day="<<d+1<<" brands="<<result.brands.size()<<" servings="<<result.collections.size()<<"\n";
 s.agents=result.agents; s.traffics=MoveSimulator::nextTraffic(c,previous,result.roadOccupancy);previous=result.roadOccupancy; solver.commitLastPlan();
 }
 std::cout<<(recorded?"recorded":"rollout")<<" TOTAL="<<score.brands.size()<<"/"<<score.dailyTypes<<"/"<<score.servings<<"\n";
 }
}
