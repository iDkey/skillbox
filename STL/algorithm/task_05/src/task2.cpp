//
// Created by jollu on 12/18/21.
//

#include "../header/task2.h"
#include <iostream>
#include <iomanip>

namespace task_5 {
    void task2() {
        double priceApple;
        int kg = 100;
        std::cout << "Enter price for 1kg apples: \n>";
        std::cin >> priceApple;
        while (priceApple <= 0) {
            std::cout << "Enter price for 1kg apples: \n>";
            std::cin >> priceApple;
        }
        priceApple = (priceApple / 100) * 10;
        double percent = priceApple;
        std::cout << "g\t\t  " << std::setw(10) << std::left
                  << std::setw(5) << "(rub.)" << std::left << std::endl;
        while (kg < 1001) {
            std::cout << std::setw(10) << kg << std::left
                      << std::setw(5) << priceApple << std::left << std::endl;
            kg += 100;
            priceApple += percent;
        }

    }
}
