#include <iostream>
#include <string>
#include "cpp-linenoise/linenoise.hpp"
#include "cparse/shunting-yard.h"

int main() {

    std::cout << "Cito dev version 0.0.0.2" << std::endl;

    std::string cmd;

    TokenMap vars;

    const auto path = "history.txt";

    linenoise::SetMultiLine(true);

    linenoise::SetHistoryMaxLen(20);

    linenoise::LoadHistory(path);
    
    while(true) {
        cmd = linenoise::Readline("cito > ");
        linenoise::AddHistory(cmd.c_str());
        linenoise::SaveHistory(path);

        std::cout << calculator::calculate(cmd.c_str(), &vars)  << std::endl;
    }

    return 0;
}