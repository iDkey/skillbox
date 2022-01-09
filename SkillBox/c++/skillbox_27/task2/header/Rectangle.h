//
// Created by zholu on 04/11/2021.
//
#pragma once
#ifndef GEOMETRY_FIGURE_RECTANGLE_H
#define GEOMETRY_FIGURE_RECTANGLE_H

#include "Core.h"

class Rectangle : public Core {
    float shortDistance = 0;
    float longDistance = 0;
public:
    Rectangle(float m, float n);

    void rectangleSize();

    void squareOutside() const;
};


#endif //GEOMETRY_FIGURE_RECTANGLE_H
