// функция void принимает значение и возводит его в квадрат
#include <iostream>

void pow(int);

int main()
{
    setlocale(LC_ALL, "ru");

    int a;
    std::cout << "Введите число ";
    std::cin >> a;
    pow(a);
}

void pow(int a) {
    a = a * a;
    std::cout << std::endl << a << std::endl;
}