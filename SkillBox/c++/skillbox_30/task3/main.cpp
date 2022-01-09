#include <iostream>
#include <cpr/cpr.h>

int main() {
    cpr::Payload post_request = cpr::Payload({{}});
    std::string get_request = "?";
    std::string input;
    while (input != "exit") {
        std::cout << "Available commands for input: «get», «post»" << std::endl;
        std::cout << "Enter request or command to execute: ";
        std::cin >> input;
        if (input == "get") {
            cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get" + get_request));
            std::cout << r.text << std::endl;
            get_request = "?";
            post_request = cpr::Payload({{}});
        } else if (input == "post") {
            cpr::Response r = cpr::Post(cpr::Url("http://httpbin.org/post"),
                                        cpr::Payload(post_request));
            std::cout << r.text << std::endl;
            get_request = "?";
            post_request = cpr::Payload({{}});
        } else if (input == "exit") {
            break;
        } else {
            std::string input2;
            std::cout << "Enter second part of request: ";
            std::cin >> input2;
            get_request += input + "=" + input2 + "&";
        }
    }
    return 0;
}
