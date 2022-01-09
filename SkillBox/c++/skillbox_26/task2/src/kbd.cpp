//
// Created by zholu on 03.11.2021.
//

#include "kbd.h"
#include "mobile.h"
#include <iostream>


void kbd() {
    Mobile myMobile;
    int command = 100;
    while (command != 3) {
        std::cout << "Please choose a command" << std::endl;
        std::cout << "0. add a Person" << std::endl;
        std::cout << "1. call" << std::endl;
        std::cout << "2.SMS" << std::endl;
        std::cout << "3.exit" << std::endl;
        std::cin >> command;
        switch (command) {
            case 0:
                myMobile.add();
                break;
            case 1:
                myMobile.call();
                break;
            case 2:
                myMobile.sms();
                break;
            case 3:
                break;
            default:
                std::cout << "! Incorrect command. Try again !";
                break;
        }
    }
}