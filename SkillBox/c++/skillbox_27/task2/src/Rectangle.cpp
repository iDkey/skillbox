//
// Created by zholu on 04/11/2021.
//

#include "Rectangle.h"
#include <iostream>


Rectangle::Rectangle(float m, float n) : shortDistance(m), longDistance(n) {

}

void Rectangle::rectangleSize() {
    colorChoose();
    std::cout << "rectangle square is " << 4 * shortDistance * longDistance << std::endl;
}

void Rectangle::squareOutside() const {
    std::cout << "Square outside has following size of edge: " << longDistance << std::endl;
}
