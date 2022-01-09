//
// Created by zholu on 04/11/2021.
//

#include "Core.h"
#include <iostream>


void Core::colorChoose() {
    std::cout << "Please choose color of shape:" << std::endl;
    std::cout << "1. red" << std::endl;
    std::cout << "2. blue" << std::endl;
    std::cout << "3. green" << std::endl;
    int choose = 0;
    std::cin >> choose;
    switch (choose) {
        case (1):
            color = "red";
            break;
        case (2):
            color = "blue";
            break;
        case (3):
            color = "green";
            break;
    }
}
