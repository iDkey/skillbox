#include  <iostream>
#include <vector>
#include <initializer_list>
#include <QTextStream>


template<class T>
struct S {
    std::vector<T> m_vec;

    S(std::initializer_list<T> l) : m_vec(l) {}

    void append(std::initializer_list<T> l) {
        m_vec(m_vec.end(), m_vec.begin(), m_vec.end());
    }

    std::pair<const T *, std::size_t> c_arr() const {
        return {&m_vec[0], m_vec.size()};
    }
};

template<typename T>
void templated_fn(T) {};


int main() {
    QTextStream out(stdout);
    S<int> s = {1, 2, 3, 4, 5};
    for (auto i: s.m_vec) {
        out << i << ' ';
    }
    out << endl;
}