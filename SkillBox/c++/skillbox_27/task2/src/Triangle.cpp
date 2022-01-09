//
// Created by zholu on 04/11/2021.
//

#include "Triangle.h"
#include <iostream>


Triangle::Triangle(float m) : distanceToApex(m) {

}

void Triangle::triangleSize() {
    colorChoose();

    std::cout << "Triangle square is " << 0.433f * (2 * 0.86f * distanceToApex) * (2 * 0.86f * distanceToApex)
              << std::endl;
}

void Triangle::squareOutside() const {
    std::cout << "Square outside has following size of edge: " << 0.86f * 2 * 0.86f * distanceToApex << std::endl;
}

