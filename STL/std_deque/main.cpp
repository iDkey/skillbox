#include <iostream>
#include <string>

std::string creatPhoneNumber(const int arr[10]) {
    std::string number = "(";
    for (int i = 0; i < 10; ++i) {
        if (arr[i] < 2) {
            number.push_back(arr[i]);
        } else if (arr[i] == 2) {
            number.push_back(arr[i]);
            number.push_back(')');
        } else if (arr[i] < 5) {
            number.push_back(arr[i]);
        } else if (arr[i] == 5) {
            number.push_back(arr[i]);
            number.push_back('-');
        } else if (arr[i] < 10) {
            number.push_back(arr[i]);
        }
    }
    return number;

}

int main() {
    int i[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::string str = creatPhoneNumber(i);
    std::cout << str;
}

