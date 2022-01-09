//
// Created by jollu on 12/18/21.
//

#include "../header/task2.h"
#include <iostream>
#include <vector>

namespace task_4 {


    Result result(std::vector<double> v) {
        Result res;
        res.low = v[0];
        res.high = 0;
        res.midle = 0;
        for (int i = 0; i < v.size(); i++) {
            res.midle += v[i];
            if (res.low > v[i]) {
                res.low = v[i];
            } else if (res.high < v[i]) {
                res.high = v[i];
            }
        }
        res.midle = res.midle / v.size();
        return res;
    }

    void task2() {
        int n;
        int count = 0;
        double number;
        std::vector<double> vec;
        std::cout << "Enter count float digits: \n>";
        std::cin >> n;
        while (count < n) {
            count++;
            std::cout << "Enter Float number: \n>";
            std::cin >> number;
            vec.push_back(number);
        }
        Result res;
        res = result(vec);
        std::cout << "Midle Arithmetic: " << res.midle << '\n';
        std::cout << "Minimum number: " << res.low << '\n';
        std::cout << "Maximum number: " << res.high << std::endl;
    }
}


