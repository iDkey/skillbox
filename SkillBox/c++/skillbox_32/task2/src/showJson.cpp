//
// Created by zholu on 11/29/2021.
//
#include <iostream>

#include <fstream>
#include "nlohmann/json.hpp"
#include "../header/showJson.h"

using json = nlohmann::json;

//read json file ===============================================
void showJson(std::string st) {
    std::ifstream file(st);
    json j;
    file >> j;
    file.close();
// чтобы setw работал cxx les 17
    std::cout  <<std::setw(4) << j << std::endl;
}
