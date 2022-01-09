#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int>  li;
    for (int nCount = 0; nCount < 5; ++nCount) {
        li.push_back(nCount);
    }

    std::list<int>::const_iterator it;
    it = std::min_element(li.begin(), li.end());
    std::cout << *it << ' ';
    it = std::max_element(li.begin(), li.end());
    std::cout << *it << ' ';
    std::cout << '\n';
}
