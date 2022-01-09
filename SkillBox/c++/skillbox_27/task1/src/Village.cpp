//
// Created by zholu on 04/11/2021.
//

#include "Village.h"
#include <iostream>
#include <string>
#include <vector>


Village::Village() : village(5) {}

void Village::settlement() {
    std::cout << "Village Settlement" << std::endl;
    for (int i = 0; i < village.size(); i++) {
        std::cout << "Tree " << i + 1 << " settlement" << std::endl;
        village[i].amountOfBigRoot();
        village[i].treePlacement();
    }
}

void Village::foundVillage(std::string foo) {
    for (int i = 0; i < village.size(); i++) {
        village[i].foundTree(foo);
    }
}
