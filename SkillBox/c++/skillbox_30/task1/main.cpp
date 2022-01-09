#include <iostream>
#include <string>
#include <cpr/cpr.h>


void httpget(char *str) {
    cpr::Response r = cpr::Get(cpr::Url(str));
    std::cout << r.text;
}

void kbd() {
    char *str;
    char input = 0;
    std::cout << "===Menu===\n";
    std::cout << "1 get\n2 post\n3 put\n4 delete\n5 patch\n";
    std::cin >> input;

    while (!(input > '0' && input < '6')) {
        std::cout << "Chose correct menu; \n";
        std::cout << "===Menu===\n";
        std::cout << "1 get\n2 post\n3 put\n4 delete\n5 patch\n";
        std::cin >> input;
    }
    switch (input) {
        case '1':
            str = "http://httpbin.org/get";
            httpget(str);
            break;
        case '2':
            str = "http://httpbin.org/post";
            httpget(str);
            break;
        case '3':
            str = "http://httpbin.org/put";
            httpget(str);
            break;
        case '4':
            str = "http://httpbin.org/delete";
            httpget(str);
            break;
        case '5':
            str = "http://httpbin.org/patch";
            httpget(str);
            break;
    }

}

int main() {
    kbd();
}