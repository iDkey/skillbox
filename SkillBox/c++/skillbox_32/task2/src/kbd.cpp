//
// Created by zholu on 11/29/2021.
//

#include <string>
#include <iostream>

#include "../header/kbd.h"
#include "../header/menu.h"
#include "../header/readFile.h"
#include "../header/showJson.h"
#include "../header/findActor.h"

void kbd() {
    int kb = 0;
    std::string movies = "movies.json";
    std::string task = "task2.txt";
    menu();
    std::cin >> kb;
    while (kb != 9) {
        switch (kb) {
            case -1:
                readFile(task);
                break;
            case 1:
                showJson(movies);
                break;
            case 2:
                findActor();
                break;
            default:
                std::cout << "False!  try again!\n";
        }
        menu();
        std::cin >> kb;
    }
    std::cout << "Bye!\n";


}