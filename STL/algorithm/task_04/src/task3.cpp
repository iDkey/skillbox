//
// Created by jollu on 12/18/21.
//

#include <iostream>
#include <vector>
#include <algorithm>

namespace task_4 {
    void unionVec(std::vector<int> &v1, std::vector<int> &v2,
                  std::vector<int> &total) {
        std::set_union(v1.begin(), v1.end(),
                       v2.begin(), v2.end(), std::back_inserter(total));
    }

    void task3() {
        std::vector<int> v1{1, 3, 5, 7, 9};
        std::vector<int> v2{2, 4, 6, 8, 10};
        std::vector<int> total;
        unionVec(v1, v2, total);
        std::cout << "Result: ";
        for (auto i: total) {
            std::cout << i << " ";
        }
    }
}
