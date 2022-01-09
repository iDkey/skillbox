//
// Created by zholu on 05/11/2021.
//
#pragma once
#ifndef TASK3_BIGBRANCH_H
#define TASK3_BIGBRANCH_H

#include "Branch.h"
#include <vector>
#include <string>


class BigBranch : Branch {
    std::vector<Branch> branches;

public:

    bool elfLiveHere(const std::string &elfName);

    int countNeighbors(const std::string &elfName);

    void setElfInHouse(const std::string &nameBranch);
};


#endif //TASK3_BIGBRANCH_H
