//
// Created by zholu on 05/11/2021.
//

#include "Branch.h"

#include <iostream>
#include <string>


std::string Branch::getElfName() {
    return elfName;
}

bool Branch::getElfLodger() const {
    return elfLodger;
}

void Branch::setElfName() {
    std::cout << "Please, input elf name:" << std::endl;
    std::string elfName;
    std::cin >> elfName;
    if (elfName != "none") {
        this->elfName = elfName;
        elfLodger = true;
    }
}