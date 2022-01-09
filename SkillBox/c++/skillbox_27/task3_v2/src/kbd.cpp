//
// Created by zholu on 05/11/2021.
//

#include "kbd.h"
#include "Tree.h"
#include <iostream>

void kbd() {
    Tree *forest[5];

    for (auto &&tree: forest) {
        tree = new Tree();
        tree->setTree();
    }

    std::cout << "Please, the name of the elf you are looking for" << std::endl;
    std::string elfName;
    std::cin >> elfName;
    bool elfNotfound = true;

    for (auto &&tree: forest) {
        if (tree->getNeighbors(elfName)) {
            elfNotfound = false;
            break;
        }
    }

    if (elfNotfound) {
        std::cout << elfName << " not found." << std::endl;
    }

    for (auto &&tree: forest)
        delete tree;
}