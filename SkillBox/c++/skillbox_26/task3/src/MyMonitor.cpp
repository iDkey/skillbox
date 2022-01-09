//
// Created by zholu on 03/11/2021.
//

#include "MyMonitor.h"
#include <iostream>


//  func move monitor  ====================================
void MyMonitor::move() {
    int newX, newY;
    std::cout << "Please enter new beginning:" << std::endl;
    std::cin >> newX >> newY;
    while ((newX + width) > 80 && ((newY + height) > 50)) {
        std::cout << "Incorrect input, please try again" << std::endl;
        std::cin >> newX >> newY;
    }
    x = newX;
    y = newY;
}

//  func resize display ===================================
void MyMonitor::resize() {
    int newWidth, newHeight;
    std::cout << "Please enter new width and new height of the window" << std::endl;
    std::cin >> newWidth >> newHeight;
    while ((x + newWidth) > 80 && (y + newHeight) > 50) {
        std::cout << "Incorrect input, please try again" << std::endl;
        std::cin >> newWidth >> newHeight;
    }
}

//  func display ============================================
void MyMonitor::display() {
    for (int i = 0; i <= 50; i++) {
        for (int j = 0; j <= 80; j++) {
            if (i >= y && i <= (y + height) && j >= x && j <= (x + width)) std::cout << "1";
            else std::cout << "0";
        }
        std::cout << std::endl;
    }
}
