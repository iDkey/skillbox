//
// Created by zholu on 04/11/2021.
//

#include "Tree.h"
#include <iostream>
#include <string>


void Tree::amountOfBigRoot() {
    tree.resize(std::rand() % 3 + 3);
}

void Tree::treePlacement() {
    for (int i = 0; i < tree.size(); i++) {
        std::cout << "Root " << i + 1 << " settlement" << std::endl;
        tree[i].amountGeneration();
        tree[i].placement();
    }
}

void Tree::foundTree(std::string foo) {
    for (int i = 0; i < tree.size(); i++) {
        tree[i].foundNeighborsStick(foo);
    }
}


