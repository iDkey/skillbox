//
// Created by zholu on 06/11/2021.
//

#include "kbd.h"
#include "Train.h"
#include <iostream>

void kbd() {

    std::vector <std::string> name;
    std::string temp;
    int time[3];
    for (int i = 0; i < 3; i++) {
        std::cout << "Please enter name and travel time for " << i + 1 << "train" << std::endl;
        std::cin >> temp >> time[i];
        name.push_back(temp);
    }
    class Train A(name[0], time[0]);
    class Train B(name[1], time[1]);
    class Train C(name[2], time[2]);
    std::thread run1(comeToRailwayStation, A);
    std::thread run2(comeToRailwayStation, B);
    std::thread run3(comeToRailwayStation, C);
    run1.join();
    run2.join();
    run3.join();

}