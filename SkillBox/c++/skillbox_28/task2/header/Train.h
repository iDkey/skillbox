//
// Created by zholu on 06/11/2021.
//
#pragma once
#ifndef STATION_TRAIN_H
#define STATION_TRAIN_H


#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <utility>
#include <vector>
#include <string>


class Train {
    std::string m_name = "unknown";
    int m_time = 0;
    bool m_arrived = false;
public:
    Train(std::string in_name, int in_time);

    [[maybe_unused]] int getTime(int x);

    int arriving();


    bool setArrival();

    bool getArrival();

    std::string getName();

    [[maybe_unused]] std::string setName(std::string foo);
};


void comeToRailwayStation(Train myTrain);

[[maybe_unused]] bool allDepart();


#endif //STATION_TRAIN_H
