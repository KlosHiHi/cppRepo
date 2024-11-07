#include <iostream>
#include <cmath>
using namespace std;


void hello(string message = "Hello World");
double add(double, double);
void swap(int&, int&);

int main()//Главная функция
{
    setlocale(LC_ALL, "Russian");

    hello();
    hello("Hello C++");
    int x = 4, y = 6;

    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;

}

void swap(int& x, int& y) { // Функция меняет числа местами, обращаясь к их адресам
    int temp = x;
    x = y;
    y = temp;
}

void hello(string message) {
    cout << message << endl;
}

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b; // Обязательно возвращать значение в любых функция за исключением void и main
}

