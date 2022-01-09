//
// Created by zholu on 04/11/2021.
//

#include "kbd.h"
#include "Team.h"
#include "Head.h"
#include <iostream>

void kbd() {
    Head myHead;
    std::string chef;
    std::cout << "Please enter a name of Chef" << std::endl;
    std::cin >> chef;
    myHead.setName(chef);
    myHead.addTeam();
    while (myHead.isEmpty()) {
        myHead.addTask();
    }
}