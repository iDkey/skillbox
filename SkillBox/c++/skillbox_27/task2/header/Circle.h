//
// Created by zholu on 04/11/2021.
//
#pragma once
#ifndef GEOMETRY_FIGURE_CIRCLE_H
#define GEOMETRY_FIGURE_CIRCLE_H

#include "Core.h"

class Circle : public Core {
public:
    float radius = 0;

    explicit Circle(float m);

    void circleSize();

    void squareOutside() const;
};


#endif //GEOMETRY_FIGURE_CIRCLE_H
