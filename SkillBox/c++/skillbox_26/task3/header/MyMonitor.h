//
// Created by zholu on 03/11/2021.
//
#pragma once
#ifndef MONITOR_MYMONITOR_H
#define MONITOR_MYMONITOR_H


class MyMonitor {
public:
    int x;
    int y;
    int width;
    int height;

    void move();

    void resize();

    void display();
};


#endif //MONITOR_MYMONITOR_H
