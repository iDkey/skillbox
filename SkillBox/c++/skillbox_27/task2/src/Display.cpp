//
// Created by zholu on 04/11/2021.
//
#include <iostream>
#include "Display.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

void Display::squareCreation() {
    float m;
    std::cout << "Please enter distance to edge: " << std::endl;
    std::cin >> m;
    Square mySquare(m);
    mySquare.squareSize();
    Square::squareOutside();
}

void Display::circleCreation() {
    float m;
    std::cout << "Please enter a radius: " << std::endl;
    std::cin >> m;
    Circle myCircle(m);
    myCircle.circleSize();
    myCircle.squareOutside();
}

void Display::triangleCreation() {
    float m;
    std::cout << "Please enter a distance from center to Apex: " << std::endl;
    std::cin >> m;
    Triangle myTriangle(m);
    myTriangle.triangleSize();
    myTriangle.squareOutside();
}

void Display::rectangleCreation() {
    float m, n;
    std::cout << "Please enter a short and long edges" << std::endl;
    std::cin >> m >> n;
    Rectangle myRectangle(m, n);
    myRectangle.rectangleSize();
    myRectangle.squareOutside();
}

