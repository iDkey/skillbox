//
// Created by zholu on 05/11/2021.
//
#pragma once
#ifndef TASK3_BRANCH_H
#define TASK3_BRANCH_H

#include <string>

class Branch {
    std::string elfName = "uncknow";
    bool elfLodger = false;

public:

    std::string getElfName();

    bool getElfLodger() const;

    void setElfName();
};


#endif //TASK3_BRANCH_H
