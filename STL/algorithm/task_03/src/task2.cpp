//
// Created by jollu on 12/17/21.
//

#include <iostream>

namespace task_3 {
    void total(const int &n, int &n1) {
        n1 += n;
    }

    void task2() {
        int n;
        int n1 = 0;
        bool b = true;
        std::cout << "Enter number: \n>";
        while(b && std::cin >> n) {
            if(n > 0) {
                total(n, n1);
                std::cout << "Enter number: or exit -1\n>";
            }else if(n == -1) {
                b = false;
            }else {
                std::cout << "Error! try again\n";
                std::cout << "Enter number: or for exit -1\n>";
            }
        }
        std::cout << "Total: " << n1 << std::endl;
    }
}
