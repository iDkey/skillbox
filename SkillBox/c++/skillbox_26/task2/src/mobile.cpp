//
// Created by zholu on 03.11.2021.
//

#include "mobile.h"
#include <iostream>
#include <string>
#include <vector>

std::vector <class AddressBook> list;

void Mobile::add ()
    {
        AddressBook newContact;
        std::string buffer;
        std::cout << "Please Enter a name of Person" << std::endl;
        std::cin >> newContact.name;
        std::cout << "Please enter a number of person with +7 (10 additional digits)" << std::endl;
        std::cin >> buffer;
        while (buffer.size() != 12 && buffer[0] != '+' && buffer[1] != '7')
        {
            std::cout << "Incorrect input" << std::endl;
            std::cout << "Please enter again" << std::endl;
            std::cin >> buffer;
        }
        newContact.number = buffer;
        list.push_back(newContact);
    };

void Mobile::call()
    {
        std::string buffer;
        std::cout << "Whom you want to call?" << std::endl;
        std::cin >> buffer;
        for (int i=0; i < list.size(); i++)
        {
            if(buffer == list[i].name)
            {
                std::cout << "We're calling to " << list[i].name << " by number" << list[i].number << std::endl;
            } else if (buffer == list[i].number)
            {
                std::cout << "We're calling to " << list[i].name << " by number" << list[i].number << std::endl;
            } else std::cout << "There is no such kind of person" << std::endl;
        }
    };
    void Mobile::sms() {
        std::string buffer;
        std::string message;
        std::cout << "Please enter a message" << std::endl;
        std::cin >> std::ws;
        std::getline(std::cin, message);
        std::cout << "Whom you want to send it?" << std::endl;
        std::cin >> buffer;
        for (int i = 0; i < list.size(); i++) {
            if (buffer == list[i].name) {
                std::cout << "SMS " << message << " were sent to " << list[i].name << " by number" << list[i].number
                          << std::endl;
            } else if (buffer == list[i].number) {
                std::cout << "SMS " << message << " were sent to " << list[i].name << " by number" << list[i].number
                          << std::endl;
            } else std::cout << "There is no such kind of person" << std::endl;
        }
    }