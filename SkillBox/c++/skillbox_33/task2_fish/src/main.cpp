#include <iostream>
#include "fish.h"

int main() {
    Fish Simulator;
    bool fish = true;

    while (fish) {
        std::cout << "Enter number pond to fishing: ";
        std::size_t pond;
        std::cin >> pond;
        try {
            Simulator.catchFish(pond);
        }
        catch (const exception_fish &e) {
            std::cout << e.what() << " in " << Simulator.attempts() << " attempts\n";
            fish = false;
        }
        catch (const exception_boot &e) {
            std::cout << e.what() << '\n';
            fish = false;
        }
        catch (const std::runtime_error &e) {
            std::cout << e.what() << '\n';
        }
        catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
        }
    }

    return 0;
}