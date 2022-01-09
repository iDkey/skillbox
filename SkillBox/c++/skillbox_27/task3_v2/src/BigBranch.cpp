//
// Created by zholu on 05/11/2021.
//

#include "BigBranch.h"
#include <string>
#include <iostream>


bool BigBranch::elfLiveHere(const std::string &elfName) {

    for (auto &&branch: branches)
        if (branch.getElfName() == elfName && branch.getElfLodger())
            return true;

    if (this->getElfName() == elfName && this->getElfLodger())
        return true;

    return false;
}

int BigBranch::countNeighbors(const std::string &elfName) {
    int countNeighbors = 0;

    for (auto &&branch: branches)
        if (branch.getElfName() != elfName) {
            countNeighbors += (int) (branch.getElfLodger());
        }


    if (this->getElfName() != elfName)
        countNeighbors += (int) getElfLodger();

    return countNeighbors;
}

void BigBranch::setElfInHouse(const std::string &nameBranch) {
    int countBranch;
    countBranch = rand() % 2 + 2;
    branches.resize(countBranch);

    std::cout << "Branch name: " << nameBranch << std::endl;
    for (auto &&branch: branches)
        branch.setElfName();

    this->setElfName();
}

