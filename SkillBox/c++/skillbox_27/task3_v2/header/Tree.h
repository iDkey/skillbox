//
// Created by zholu on 05/11/2021.
//
#pragma once
#ifndef TASK3_TREE_H
#define TASK3_TREE_H

#include "BigBranch.h"
#include <string>



class Tree {
    std::vector<BigBranch> bigBranches;

public:

    Tree() {}

    void setTree();


    bool getNeighbors(const std::string& elfName);

};

#endif //TASK3_TREE_H
