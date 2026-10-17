#include <iostream>
#include "io/JsonReader.hpp"
#include "solver/Solver.hpp"
int main() {
    const auto config = JsonReader::readGameConfig();
    bool useRegions = false;
    const auto types = AgentStrategy::decideAgentTypes(config, &useRegions);
    std::cout << "selected=[";
    for (size_t i = 0; i < types.size(); ++i) {
        if (i) std::cout << ',';
        std::cout << types[i];
    }
    std::cout << "] regions=" << (useRegions ? "on" : "off") << '\n';
}
