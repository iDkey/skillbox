//
// Created by zholu on 04/11/2021.
//
#pragma once
#ifndef GEOMETRY_FIGURE_TRIANGLE_H
#define GEOMETRY_FIGURE_TRIANGLE_H

#include "Core.h"

class Triangle : public Core {
public:
    float distanceToApex;

    explicit Triangle(float m);

    void triangleSize();

    void squareOutside() const;
};


#endif //GEOMETRY_FIGURE_TRIANGLE_H
