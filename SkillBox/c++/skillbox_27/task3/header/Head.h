//
// Created by zholu on 04/11/2021.
//
#pragma once
#ifndef SIMULATOR_HEAD_H
#define SIMULATOR_HEAD_H

#include "People.h"
#include "Team.h"
#include <vector>

class Head : public People {
public:
    std::vector<Team> teams;
    int m_amount = 0;
public:

    void addTeam();

    void addTask();

    bool isEmpty();

    int getAmount() const;

};


#endif //SIMULATOR_HEAD_H
