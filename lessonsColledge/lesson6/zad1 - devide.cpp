// Функция принимает 2 числа и делит их друг на друга
#include <iostream>
#include <cmath>
using namespace std;

int compare(int, int);
double compare(double, double);

int main()
{
    setlocale(LC_ALL, "Russian");

    double n1, n2;
    cout << "Введите два числа" << endl;
    cin >> n1 >> n2;
    cout << compare(n1, n2);
}

int compare(int n1, int n2) {
    if (n2 == 0) cout << endl << "ОШИБКА" << endl;
    return n1 / n2;
}

double compare(double n1, double n2) {
    if (n2 == 0) cout << endl << "ОШИБКА" << endl;
    return round((n1 / n2) * 1000) / 1000;
}