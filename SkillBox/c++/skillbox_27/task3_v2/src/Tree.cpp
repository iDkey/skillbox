//
// Created by zholu on 05/11/2021.
//

#include "Tree.h"
#include <ctime>
#include <iostream>


void Tree::setTree() {
    std::srand(time(nullptr));
    int countBigBranch = rand() % 2 + 1/*3 + 3*/;
    bigBranches.resize(countBigBranch);

    std::string nameBranch = "Branch#";
    int i = 1;
    for (auto &&branches: bigBranches) {
        branches.setElfInHouse(nameBranch + std::to_string(i++));
    }
}

bool Tree::getNeighbors(const std::string &elfName) {
    bool found = false;
    int i;
    for (i = 0; i < bigBranches.size(); ++i) {
        if (bigBranches[i].elfLiveHere(elfName)) {
            found = true;
            break;
        }
    }

    if (!found) {
        return false;
    } else {
        std::cout << elfName << " has " << bigBranches[i].countNeighbors(elfName) << " neighbors" << std::endl;
        return true;
    }
}
