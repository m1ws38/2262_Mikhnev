#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream numbers(line);

    bool found = false;
    long long x;

    while (numbers >> x) {
        if (x < 0) {
            std::cout << x << '\n';
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "No negative numbers\n";
    }
}