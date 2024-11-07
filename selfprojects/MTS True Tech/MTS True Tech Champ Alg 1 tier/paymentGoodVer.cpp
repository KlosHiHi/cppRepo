#include <iostream>
#include <string>

int main() {
        unsigned long long a, b, u, payment = 0;
        do {
            std::cin >> a;
            std::cin >> b;
        } while (a < 1 or a > 1000 or b < 1 or b > 1000);
        do
            std::cin >> u;
        while (u < 0 or u > 10000);
        if (u <= 100)
            payment = a;
        else
            payment = a + b * (u - 100);
        std::cout << payment << std::endl;
    }
    return 0;
}