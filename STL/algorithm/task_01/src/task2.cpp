//
// Created by jollu on 12/17/21.
//

#include "task2.h"
#include <vector>
#include <iostream>


namespace task_1 {
    int sort(std::vector<int> &vec) {
        std::sort(vec.begin(), vec.end());
        return vec[0];
    }

    void task2() {
        std::vector<int> vec{};
        bool b = true;
        int digit;
        std::cout << "Enter digit: \n>";
        while (b && std::cin >> digit) {
            if (digit == -1) {
                b = false;
            } else if (digit < 0) {
                std::cout << "Digit less than zero. Try again\n>";
            } else {
                vec.push_back(digit);
                std::cout << "Enter digit: \n>";
            }
        }
        int lessDigit = sort(vec);
        std::cout << lessDigit << std::endl;

    }
}