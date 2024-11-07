#include <iostream>
#include <string>
//Подсчёт цены тарифа

int main() {
    long long a, b, u, payment;
    std::cin >> a;
    std::cin >> b;
    std::cin >> u;
    if (u <= 100)
        payment = a;
    else
        payment = a + b * (u - 100);
    std::cout << payment << std::endl;
    return 0;
}