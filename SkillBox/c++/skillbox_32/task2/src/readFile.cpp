//
// Created by zholu on 11/29/2021.
//
#include <iostream>
#include <string>
#include <fstream>

#include "../header/readFile.h"
// read task file ===============================================
void readFile(std::string st) {
    char ch;
    std::ifstream file(st);
    while(!file.eof()) {
        file >> std::noskipws >> ch;
        std::cout << ch;
    }
    file.close();
}