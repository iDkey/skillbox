//
// Created by zholu on 04/11/2021.
//
#pragma once
#ifndef SIMULATOR_TEAM_H
#define SIMULATOR_TEAM_H

#include "People.h"
#include <vector>
#include "Worker.h"

class Team : public People {
    int m_count = 0;
    std::vector<Worker> workers;
    int m_id = 0;
    std::string m_managerName;
public:
    Team(int inId, int inCount);

    bool allIsBusy();

    void giveTask(int inTask);
};


#endif //SIMULATOR_TEAM_H
