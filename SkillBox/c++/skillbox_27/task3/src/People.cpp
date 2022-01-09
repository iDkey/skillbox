//
// Created by zholu on 04/11/2021.
//

#include "People.h"
#include <string>


std::string People::setName(std::string inName) {
    return m_name = std::move(inName);
}

std::string People::getName() {
    return m_name;
}
