//
// Created by jollu on 12/17/21.
//

#include <iostream>
#include "../header/task3.h"
#include <string>
#include <stdlib.h>

namespace task_2 {
//    считает совпадение и сколько из них на месте если два строка одинаковые сразу возвращает count
    int count(std::string str1, std::string str2, int &mean, bool &b) {
        if (str1 == str2) {
            b = false;
            mean = 3;
            return 3;
        }
        int count = 0;
        for (int i = 0; i < str1.size(); i++) {
            if (str1[i] == str2[i]) {
                count++;
            }
        }
//
        for (int i = 0; i < str1.size(); i++) {
            for (int j = 0; j < str1.size(); j++) {
                if (str1[i] == str2[j]) {
                    mean++;
                }
            }
        }
        return count;
    }

// проеверяет в наличии is digit
    bool correctDigit(std::string str) {
        for (int i = 0; i < str.size(); i++) {
            if (!std::isdigit(str[i])) {
                return false;
            }
        }
        return true;
    }

// ну по сути это мейн
    void task3() {
        int r = std::rand() % 99;
        int mean = 0;
        std::string rand = std::to_string(r);
        std::string str;
        std::cout << "Entre guess digit from 0 to 999\n>";

        bool b = true;
        while (b && std::cin >> str) {
            if (correctDigit(str)) {
                int count1 = count(rand, str, mean, b);
                std::cout << "Guessed " << mean << ". In place: " << count1 << std::endl;
            } else {
                std::cout << "Enter correct digits: \n";
            }
            if (b) {
                std::cout << "Entre guess digit from 0 to 999\n>";

            }
        }
    }
}

