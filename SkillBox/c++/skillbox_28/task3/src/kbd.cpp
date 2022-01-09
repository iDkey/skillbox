//
// Created by zholu on 06/11/2021.
//

#include "kbd.h"
#include "func.h"
#include <thread>
#include <iostream>

void kbd() {
    std::srand(std::time(nullptr));
    std::vector<int> online_orders;
    std::vector<int> cooked_orders;
    std::thread thOrders(order, &online_orders);
    thOrders.detach();
    std::thread thKitchen(kitchen, &online_orders, &cooked_orders);
    thKitchen.detach();
    std::thread thDelivery(delivery, &cooked_orders);
    thDelivery.join();
    std::cout << "Work is done";
}