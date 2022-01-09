//
// Created by zholu on 04/11/2021.
//
#pragma
#ifndef GEOMETRY_FIGURE_SQUARE_H
#define GEOMETRY_FIGURE_SQUARE_H

#include "Core.h"

class Square : public Core {
public:
    float distanceToEdge = 0;

    explicit Square(float m);

    void squareSize();

    static void squareOutside();
};


#endif //GEOMETRY_FIGURE_SQUARE_H
