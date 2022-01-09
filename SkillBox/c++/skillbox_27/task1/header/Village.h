//
// Created by zholu on 04/11/2021.
//
#pragma once

#include <vector>
#include "Tree.h"
#include <string>

#ifndef TASK_4_1_VILLAGE_H
#define TASK_4_1_VILLAGE_H


class Village {
public:
    std::vector<class Tree> village;

    Village();

    void settlement();

    void foundVillage(std::string foo);

};


#endif //TASK_4_1_VILLAGE_H
