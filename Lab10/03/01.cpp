#include <iostream>

int main() {
    int a = 6;
    int b = 3;

    int *p = &a;
    int &r = a;

    std::cout << "a * b = " << a * b << '\n';
    std::cout << "*p = " << *p << '\n';
    std::cout << "a & b = " << (a & b) << '\n';

    r = 10;

    std::cout << "a after r = 10: " << a << '\n';

    return 0;
}