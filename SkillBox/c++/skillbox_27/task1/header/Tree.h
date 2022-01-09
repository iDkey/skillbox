//
// Created by zholu on 04/11/2021.
//
#pragma once

#include <vector>
#include <string>
#include "Root.h"

#ifndef TASK_4_1_TREE_H
#define TASK_4_1_TREE_H


class Tree {
public:
    std::vector<class Root> tree;

    void amountOfBigRoot();

    void treePlacement();

    void foundTree(std::string foo);
};


#endif //TASK_4_1_TREE_H
