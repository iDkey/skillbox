//
// Created by jollu on 12/17/21.
//

#include <iostream>

namespace task_2 {

    double count(double d, double g, double p) {
        return g * (d / 100) * p * 2;
    }

    void task1() {
        double distance;
        double gasoline;
        double priceGas;

        std::cout << "Distance to the cottage (km): \n>";
        std::cin >> distance;
        std::cout << "Gasoline consumption (liters per 100 km of run):\n>";
        std::cin >> gasoline;
        std::cout << "Price per liter of gasoline (rub.): \n>";
        std::cin >> priceGas;
        while (distance <= 0 && gasoline <= 0 && priceGas <= 0) {
            std::cout << "Error  less than zero!\n";
            std::cout << "Distance to the cottage (km): \n>";
            std::cin >> distance;
            std::cout << "Gasoline consumption (liters per 100 km of run):\n>";
            std::cin >> gasoline;
            std::cout << "Price per liter of gasoline (rub.): \n>";
            std::cin >> priceGas;
        }
        double totalPrice = count(distance, gasoline, priceGas);
        std::cout << "A trip to the country house and back will cost " << totalPrice << std::endl;
    }
}