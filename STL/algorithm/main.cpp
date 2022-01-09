#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <map>

#pragma warning(disable : 4996)

struct PeoplesBirthday {
    std::map<std::tm, std::string> nearDate;
    std::multimap<std::tm, std::string> list;
    std::time_t t = std::time(nullptr);
    std::tm local = *localtime(&t);
    std::string surname;
};

void getInfo_loop(PeoplesBirthday& birthday) {
    while (1) {
        std::cout << "Enter your surname:\n";
        std::cin >> birthday.surname;

        if (birthday.surname == "end") break;

        std::cout << "Enter your birthday:\n";
        std::cin >> std::get_time(&birthday.local, "%Y/%m/%d");

        // std::time_t t = std::time(nullptr);
        // std::tm local = *localtime(&t);
        std::time_t t = std::mktime(&birthday.local);
        std::time_t currentTime = std::time(nullptr);

        if (t >= currentTime) {      //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            birthday.list.insert(
                    std::make_pair(birthday.local, birthday.surname));
        }
    }
}