#include <iostream>

int main() {
    for (int i = 0; i < 4; ++i) {
        ++i;
        std::cout << i << ' ';
    }
    std::cout << '\n';

    {
        int counter = 0, limit = 4;

        for (const int& i = counter; i < limit; ++counter) {
            std::cout << i << ' ';
        }
    }

    std::cout << '\n';
}