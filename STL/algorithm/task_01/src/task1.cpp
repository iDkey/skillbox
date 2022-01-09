//
// Created by jollu on 12/17/21.
//

#include <string>
#include <iostream>
#include "task1.h"

namespace task_1 {
    bool isIcecreamSandwich(std::string_view str) {
        int buf = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == str[str.length() - 1 - i]) {
                if (str[i] != str[i + 1]) {
                    ++buf;
                }
            }
        }
        std::cout << buf << "\n";
        if (buf == 3) {
            return true;
        }
        return false;
    }

    void task1() {
        std::string str;
        std::cout << "Enter Sandwich string: \n>";
        std::cin >> str;
        std::string_view str1{str};
        std::cout << std::boolalpha << isIcecreamSandwich(str1) << std::endl;
    }
}