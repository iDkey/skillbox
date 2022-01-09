//
// Created by jollu on 12/18/21.
//

#include "../header/task1.h"
#include <iostream>

namespace task_6 {
    void task1() {
        int a;
        int b;
        std::cout << "Enter to number: \n";
        std::cin >> a >> b;
        if (a == b) {
            std::cout << a << " is equal " << b << std::endl;
        } else if (a > b) {
            std::cout << a << " Less than " << b << std::endl;
        } else {
            std::cout << a << " Small than " << b << std::endl;
        }

    }
}