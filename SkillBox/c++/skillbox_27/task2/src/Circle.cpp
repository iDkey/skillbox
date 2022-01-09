//
// Created by zholu on 04/11/2021.
//

#include "Circle.h"
#include <iostream>

Circle::Circle(float m) : radius(m) {

}

void Circle::circleSize() {
    colorChoose();
    std::cout << "Circle size is " << 3.14f * radius * radius << std::endl;
}

void Circle::squareOutside() const {
    std::cout << "Square outside has following size of edge: " << 2 * radius << std::endl;
}
