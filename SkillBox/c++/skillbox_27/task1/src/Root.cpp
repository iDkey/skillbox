//
// Created by zholu on 04/11/2021.
//
#include "Root.h"
#include <iostream>

#include <string>

//    func ===================================
void Root::amountGeneration() {
    names.resize(std::rand() % 2 + 2);
}

//    func ===================================
void Root::placement() {
    for (int i = 0; i < names.size(); i++) {
        std::cout << "middle stick " << i + 1 << " settlement" << std::endl;
        std::cout << " Please enter a name of Elf" << std::endl;
        std::cin >> names[i];
    }
}

//   func =========================================
void Root::foundNeighborsStick(std::string foo) {
    for (int i = 0; i < names.size(); i++) {
        if (foo == names[i]) {
            std::cout << "Neighbors of " << foo << " are:" << std::endl;
            for (int j = 0; j < names.size(); j++) {
                if (j != i) std::cout << names[j] << std::endl;
            }
        }
    }
}


