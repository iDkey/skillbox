#include <QApplication>
#include <QPushButton>

#include <iostream>
#include <unordered_set>
#include <vector>




int main() {
    std::vector<int> vec{1, 3, 3, 4, 5, 6, 7, 8, 9, 7, 6, 5, 4, 3, 2, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1, 1, 3, 4, 5, 6, 7, 8,
                         7, 4, 4, 3, 3, 2, 2, 1, 3, 7, 4, 3, 2, 1, 4, 6,};
    auto set = [](const std::vector<int> &vec)
    {
        std::unordered_set<int> u_set(vec.begin(), vec.end());
        return std::make_unique<std::vector<int>>(u_set.begin(), u_set.end());
    };

    auto ptr = set(vec);

    for(const auto &s: *ptr.get())
        std::cout<< s << " ";
    std::cout << std::endl;


}


