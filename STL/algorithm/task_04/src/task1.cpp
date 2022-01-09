//
// Created by jollu on 12/18/21.
//

#include "../header/task1.h"
#include <iostream>
#include <iostream>

namespace task_4 {
    double resulVerse(int i) {
        return (double) i * 1.0668;
    }

    void task1() {
        int n;
        std::cout << "Enter distance in verse: \n>";
        std::cin >> n;
        while (n <= 0) {
            std::cout << "Error. try again: \n>";
            std::cin >> n;
        }
        double res = resulVerse(n);
        std::cout << n << " verse = " << res << " km\n";
    }
}