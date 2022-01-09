//
// Created by zholu on 04/11/2021.
//

#include "Team.h"
#include "People.h"
#include "Worker.h"
#include <iostream>


Team::Team(int inId, int inCount) {
    m_id = inId;
    m_count = inCount;
    std::cout << "Please enter manager name" << std::endl;
    std::cin >> m_managerName;
    for (int i = 0; i < m_count; i++) {
        std::cout << "Please enter a Worker name" << std::endl;
        std::string temp;
        std::cin >> temp;
        Worker myWorker;
        myWorker.setName(temp);
        workers.push_back(myWorker);
    }
}

//  =========================================================
bool Team::allIsBusy() {
    for (int i = 0; i < m_count; i++) {
        if (!workers[i].isBusy()) return false;
    }
    return true;
}

void Team::giveTask(int inTask) {
    if (!allIsBusy()) {
        inTask = (inTask + m_id) % 3 + 1;
        for (int i = 0; !workers[i].isBusy() && i < workers.size(); i++)
            if (inTask == 1) workers[i].setTask(A);
            else if (inTask == 2) workers[i].setTask(B);
            else if (inTask == 3) workers[i].setTask(C);
    } else std::cout << "All is busy in that team!";
}
