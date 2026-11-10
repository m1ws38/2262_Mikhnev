#include <iostream>

int main() {
    int to = 3;

    for (int i = 0; i < to; ++i) {
        std::cout << i << ' ';
        to = 1;
    }
    std::cout << '\n';

    to = 3;

    {
        int counter = 0, limit = to;

        for (const int& i = counter; i < limit; ++counter) {
            std::cout << i << ' ';
            to = 1;
        }
    }

    std::cout << '\n';
}