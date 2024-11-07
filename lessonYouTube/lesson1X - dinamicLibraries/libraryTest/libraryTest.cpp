#include <iostream>
#include "MyFunctions.h"
// xcopy /y /d "адресс" "$(OutDir)"
int main() {
    int sum = add(3, 4);
    int product = multiply(3, 4);

    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Product = " << product << std::endl;

    return 0;
}
