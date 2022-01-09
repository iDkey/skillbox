//
// Created by zholu on 04/11/2021.
//

#include "Square.h"
#include <iostream>


Square::Square(float m) : distanceToEdge(m) {

}

void Square::squareSize() {
    colorChoose();
    std::cout << "Square size is " << (2 * distanceToEdge) * (2 * distanceToEdge) << std::endl;
}

void Square::squareOutside() {
    std::cout << "It's equal" << std::endl;
}

