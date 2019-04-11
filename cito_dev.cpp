#include <iostream>
#include <string>

int main() {

    std::cout << "Cito dev version 0.0.0.1" << std::endl;

    std::string cmd;
    
    while(true) {
        std::cout << "cito > ";
        std::cin >> cmd;

        if (cmd == "exit") {
            std::cout << "Exit Cito!" << std::endl;
            break;
        }

        std::cout << cmd << std::endl;
    }

    return 0;
}