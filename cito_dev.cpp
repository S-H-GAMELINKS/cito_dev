#include <iostream>
#include <string>
#include "cparse/shunting-yard.h"

int main() {

    std::cout << "Cito dev version 0.0.0.2" << std::endl;

    std::string cmd;

    TokenMap vars;
    
    while(true) {
        std::cout << "cito > ";
        std::cin >> cmd;

        std::cout << calculator::calculate(cmd.c_str(), &vars)  << std::endl;
    }

    return 0;
}