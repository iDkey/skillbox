//
// Created by jollu on 12/6/21.
//

#ifndef TASK2_FISH_FISH_H
#define TASK2_FISH_FISH_H


#pragma once
#include <array>
#include <exception>
#include <string>

class exception_fish : std::exception
{
    std::string _message;

public:
    exception_fish(const std::string& message) : _message(message){}
    const char* what() const noexcept override
    {

        return _message.c_str();
    }
};

class exception_boot : std::exception
{
    std::string _message;

public:
    exception_boot(const std::string& message) : _message(message){}
    const char* what() const noexcept override
    {

        return _message.c_str();
    }
};


class Fish
{
    enum class Items
    {
        FISH,
        BOOT,
        EMPTY
    };
    int _size_boot = 3;
    mutable int _col_fishing = 1;
    Items _pond[9];

    int random(int a, int b);

public:
    Fish();

    void catchFish(std::size_t pond) const;
    int attempts() const {return _col_fishing;}
};

#endif //TASK2_FISH_FISH_H
