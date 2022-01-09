//
// Created by zholu on 03/11/2021.
//

#include "kbd.h"
#include <iostream>
#include "MyMonitor.h"

void kbd() {
    MyMonitor Monitor;
    std::cout << "Please enter initial parameters of Window" << std::endl;
    std::cin >> Monitor.x >> Monitor.y >> Monitor.width >> Monitor.height;
    while ((Monitor.x + Monitor.width) > 80 && (Monitor.y + Monitor.height) > 50) {
        std::cout << "Incorrect entry, please try again" << std::endl;
        std::cin >> Monitor.x >> Monitor.y >> Monitor.width >> Monitor.height;
    }
    int answer;

    while (answer != 3) {
        std::cout << "Please choose a command" << std::endl;
        std::cout << "0. move Window" << std::endl;
        std::cout << "1. resize Window" << std::endl;
        std::cout << "2.display Window" << std::endl;
        std::cout << "3.exit" << std::endl;
        std::cin >> answer;
        switch (answer) {
            case 0:
                Monitor.move();
                break;
            case 1:
                Monitor.resize();
                break;
            case 2:
                Monitor.display();
                break;
            case 3:
                break;
            default:
                std::cout << "! Incorrect command. Try again !";
                break;
        }
    }
}