//
// Created by zholu on 04/11/2021.
//
#pragma once

#include <vector>
#include <string>

#ifndef TASK_4_1_ROOT_H
#define TASK_4_1_ROOT_H

class Root {
public:
    std::vector<std::string> names;

    void amountGeneration();

    void placement();

    void foundNeighborsStick(std::string foo);
};


#endif //TASK_4_1_ROOT_H
