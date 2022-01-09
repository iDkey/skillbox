//
// Created by zholu on 11/29/2021.
//
#include <iostream>
#include <string>
#include <fstream>
#include "nlohmann/json.hpp"
#include "../header/findActor.h"

using json = nlohmann::json;
//find actor ==================================================
void findActor() {
    std::ifstream file("data.json");
    json j;
    file >> j;
    std::cout << j << std::endl;

    std::string name;
    std::cout << "Name:";
    std::cin >> name;

    for (auto it = j.begin(); it != j.end(); ++it)
    {
        json movie = it.value();
        json cast = movie["cast"];
        for (auto jt = cast.begin(); jt != cast.end(); ++jt)
        {
            std::string c_name = to_string(jt.value());
            if (c_name.find(name) != std::string::npos)
            {
                std::cout << name << " in " << it.key() << " as " << jt.key() << std::endl;
            }
        }
    }



}