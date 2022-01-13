#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


void myFunc(std::vector<std::string> &vec) {
    std::sort(vec.begin(), vec.end());
    std::string s = vec[0];
    int count = 1;

    for (int i = 1; i < vec.size(); i++) {
        std::cout << s << std::endl;
        for (int j = 0; j < vec.size(); j++) {
            std::string &str = vec[j];
            if (s[count] == str[0]) {
                s = str;
                count++;
            } else {
                continue;
            }
        }
    }
}

int main() {
    std::vector<std::string> vec{"cdef",  "abcd", "efgi", "defg", "bcde"};
    myFunc(vec);
}
