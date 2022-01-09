//
// Created by zholu on 04/11/2021.
//
#pragma once
#ifndef SIMULATOR_PEOPLE_H
#define SIMULATOR_PEOPLE_H

#include <string>

class People {
    std::string m_name = "Unknown";
public:
    std::string setName(std::string inName);

    std::string getName();
};


#endif //SIMULATOR_PEOPLE_H
