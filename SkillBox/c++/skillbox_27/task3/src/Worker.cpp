//
// Created by zholu on 04/11/2021.
//

#include "Worker.h"
#include "taskType.h"


bool Worker::isBusy() {
    if (m_task == None) {
        return false;
    } else return true;
}

taskType Worker::setTask(taskType inTask) {
    return m_task = inTask;
}

taskType Worker::getTask() {
    return m_task;
}

void Worker::addTask(taskType inTask) {
    if (!isBusy()) setTask(inTask);
}
