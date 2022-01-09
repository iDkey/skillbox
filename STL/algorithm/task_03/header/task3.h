//
// Created by jollu on 12/17/21.
//

#ifndef ALGORITHM_TASK3_H
#define ALGORITHM_TASK3_H
#include <string>
#include <vector>
namespace task_3 {
    struct Simb {
        char ch;
        std::string simb;
    };

    std::string encode(const std::vector<Simb> &vec, std::string str);
    void task3();
}
#endif //ALGORITHM_TASK3_H
