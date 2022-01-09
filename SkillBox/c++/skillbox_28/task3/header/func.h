//
// Created by zholu on 06/11/2021.
//

#ifndef TASK3_FUNC_H
#define TASK3_FUNC_H

#include <vector>
#include <mutex>



void print_order(int order);

void print_cooked(int order);

void print_delivery(int order);

void order(std::vector<int> *online_orders);

void kitchen(std::vector<int> *online_orders, std::vector<int> *cooked_orders);

void delivery(std::vector<int> *cooked_orders);

#endif //TASK3_FUNC_H
