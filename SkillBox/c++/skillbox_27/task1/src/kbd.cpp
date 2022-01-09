//
// Created by zholu on 04/11/2021.
//

#include "kbd.h"
#include <iostream>
#include "Village.h"

void kbd() {
    Village myVillage;
    myVillage.settlement();
    std::cout << "Who are we looking for?" << std::endl;
    std::string answer;
    std::cin >> answer;
    myVillage.foundVillage(answer);
}