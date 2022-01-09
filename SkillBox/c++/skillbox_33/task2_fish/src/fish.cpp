//
// Created by jollu on 12/6/21.
//

#include "fish.h"
#include <stdexcept>
#include <random>


int Fish::random(int a, int b) {
    std::random_device rd;
    std::mt19937 ran(rd());
    std::uniform_int_distribution<> gen_mt(a, b);
    return gen_mt(ran);
}

Fish::Fish() {
    constexpr auto size_pond = sizeof(_pond) / sizeof(_pond[0]);

    for (std::size_t i = 0; i < size_pond; ++i) {
        _pond[i] = Items::EMPTY;
    }

    _pond[random(0, size_pond - 1)] = Items::FISH;

    int count_pond = 0;

    while (count_pond != _size_boot) {
        const auto rand = random(0, size_pond - 1);
        if (Items::EMPTY == _pond[rand]) {
            _pond[rand] = Items::BOOT;
            ++count_pond;
        }
    }

}

void Fish::catchFish(std::size_t pond) const {
    constexpr auto size_pond = sizeof(_pond) / sizeof(_pond[0]);
    if (pond >= size_pond)
        throw std::out_of_range("Error: fishing sector must be 0 to 8");

    if (_pond[pond] == Items::FISH)
        throw exception_fish("Good job, you caught a fish");

    if (_pond[pond] == Items::BOOT)
        throw exception_boot("Ha ha, you caught the boot");

    if (_pond[pond] == Items::EMPTY) {
        ++_col_fishing;
        throw std::runtime_error("There are no fish here, try again");
    }


}