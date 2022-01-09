//
// Created by zholu on 04/11/2021.
//

#include "Head.h"
#include <iostream>

void Head::addTeam() {
    int inId, inCount;
    std::cout << "Please enter number of group and amount of employees" << std::endl;
    std::cin >> inId >> inCount;
    Team myTeam = Team(inId, inCount);
    teams.push_back(myTeam);
    m_amount++;
}

void Head::addTask() {
    int control = 0;
    int inAnswer = 0;
    std::cout << "Please give a number of task" << std::endl;
    std::cin >> inAnswer;
    for (int i = 0; i < m_amount; i++) {
        if (!teams[i].allIsBusy()) {
            teams[i].giveTask(inAnswer);
            break;
        } else control++;
    }
    if (control == m_amount) std::cout << "All are busy!" << std::endl;
}

bool Head::isEmpty() {
    for (int i = 0; i < m_amount; i++) {
        if (!teams[i].allIsBusy()) return true;
    }
    return false;
}

int Head::getAmount() const {
    return m_amount;
}

