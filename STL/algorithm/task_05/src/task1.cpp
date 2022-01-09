//
// Created by jollu on 12/18/21.
//

#include "../header/task1.h"
#include <iostream>
#include <vector>
#include <algorithm>

namespace task_5 {

    Hour totalHour(int n) {
        Hour H;
        H.hour = 0;

        while (n > 59) {
            H.hour++;
            n -= 60;
        }
        H.minut = n;
        return H;
    }

    void task1() {
        int n;
        std::cout << "Enter time interval in minutes: \n>";
        std::cin >> n;
        while (n <= 0) {
            std::cout << "Enter time interval in minutes: \n>";
            std::cin >> n;
        }
        Hour H;
        H = totalHour(n);
        std::cout << n << " minutes = " <<   H.hour << " h. " << H.minut << " min. " << std::endl;
    }
}