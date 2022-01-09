//
// Created by zholu on 04/11/2021.
//

#include "kbd.h"
#include "Display.h"
#include <iostream>


void kbd() {
    int buffer = 0;
    while (buffer != 5) {
        std::cout << "Please choose what shape we will create" << std::endl;
        std::cout << "1. circle" << std::endl;
        std::cout << "2. square" << std::endl;
        std::cout << "3.triangle" << std::endl;
        std::cout << "4. rectangle" << std::endl;
        std::cout << "5. exit" << std::endl;
        std::cin >> buffer;
        switch (buffer) {
            case (1):
                Display::circleCreation();
                break;
            case (2):
                Display::squareCreation();
                break;
            case (3):
                Display::triangleCreation();
                break;
            case (4):
                Display::rectangleCreation();
                break;
            case (5):
                break;
            default:
                std::cout << "Incorrect command!!! Try again" << std::endl;
                break;
        }
    }
}
