//
// Created by jollu on 12/17/21.
//

#include "../header/task3.h"
#include <iostream>
#include <string>

namespace task_1 {
    std::string seasons(int n) {
        if ((n == 12) || (n >= 1 && n <= 2)) {
            return "Winter";
        } else if (n >= 3 && n <= 5) {
            return "Spring";
        } else if (n >= 6 && n <= 8) {
            return "Autumn";
        } else if (n >= 9 && n <= 11) {
            return "Summer";
        }
    }

    void task3() {
        int digit;
        std::string str;
        bool b = true;
        std::cout << "Enter digit from 1 to 12: \n>";
        while (b && std::cin >> digit) {
            if (digit >= 1 && digit <= 12) {
                str = seasons(digit);
                std::cout << str << std::endl;
                std::cout << "Enter digit from 1 to 12: or exit -1 \n>";

            } else if (digit == -1) {
                b = false;
            } else {
                std::cout << "Error digits. Try again!\n>";
            }
        }
        std::cout << "Bye!" << std::endl;
    }
}