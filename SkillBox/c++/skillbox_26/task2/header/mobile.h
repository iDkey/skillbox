//
// Created by zholu on 03.11.2021.
//
#pragma once
#include <string>
#include <vector>
#ifndef PHONE_MOBILE_H
#define PHONE_MOBILE_H

#endif //PHONE_MOBILE_H


class AddressBook
{
public:
    std::string name;
    std::string number;
};

class Mobile
{
public:
    void add ();

    void call();
    void sms();

};