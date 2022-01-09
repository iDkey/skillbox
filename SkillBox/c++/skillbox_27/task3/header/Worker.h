//
// Created by zholu on 04/11/2021.
//
#pragma once
#ifndef SIMULATOR_WORKER_H
#define SIMULATOR_WORKER_H

#include "People.h"
#include "taskType.h"

class Worker : public People {
    taskType m_task = None;
public:
    bool isBusy();

    taskType setTask(taskType inTask);

    taskType getTask();

    void addTask(taskType inTask);
};

#endif //SIMULATOR_WORKER_H
