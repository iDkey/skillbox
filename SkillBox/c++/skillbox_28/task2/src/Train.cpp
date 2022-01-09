//
// Created by zholu on 06/11/2021.
//

#include "Train.h"


#include <iostream>
#include <thread>
#include <chrono>

#include <string>
#include <vector>
#include <mutex>



std::vector<bool> railwayStation = {false, false, false};
std::mutex railwayStation_access;


Train::Train(std::string in_name, int in_time) {
    m_time = in_time;
    m_name = in_name;
}

[[maybe_unused]] int Train::getTime(int x) {
    return m_time = x;
}

int Train::arriving() {
    return m_time -= 1;
}

bool Train::getArrival() {
    return m_arrived;
}

bool Train::setArrival() {
    if (m_time == 0) return m_arrived = true;
    else return m_arrived = false;
}



std::string Train::getName() {
    return m_name;
}



// =========================================================================
void comeToRailwayStation(Train myTrain) {
    myTrain.setArrival();
    while (!myTrain.getArrival()) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        myTrain.arriving();
        myTrain.setArrival();
    }
    railwayStation_access.lock();
    std::cout << "Train " << myTrain.getName() << " is arrived " << std::endl;
    std::cout << "Waiting for depart. PLease enter a command depart" << std::endl;
    std::string buffer;
    std::cin >> buffer;
    while (buffer != "depart") {
        std::cout << " Incorrect input command, please try again " << std::endl;
        std::cin >> buffer;
    }
    for (int i = 0; i < railwayStation.size(); i++) {
        if (railwayStation[i] == false) {
            railwayStation[i] = true;
            break;
        }
    }
    railwayStation_access.unlock();
}




