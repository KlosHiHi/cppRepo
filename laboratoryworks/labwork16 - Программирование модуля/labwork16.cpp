#include <iostream>
#include "mymathmodule.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    float a, b;
    int quantity, numQ = 0;
    cout << "Введите два числа для деления: ";
    cin >> a >> b;
    cout << "Введите число для подсчёта факториала: ";
    cin >> quantity;
    cout << "Введите количество чисел для сравнения: ";
    cin >> numQ;
    int*num = new int[numQ];
    cout << "Введите числа (через пробел): ";
    for (int i = 0; i < numQ; i++) 
        cin >> num[i];
    
    cout << "\nДеление - " << devide(a, b) << endl;
    cout << "Факторил " << quantity << "! - " << fact(quantity) << endl;
    cout << "Поиск максимального значения - " << findmax(num, numQ) << endl;
    cout << "Поиск минимального значения - " << findmin(num, numQ) << endl;

    delete[] num;
    return 0;
}

