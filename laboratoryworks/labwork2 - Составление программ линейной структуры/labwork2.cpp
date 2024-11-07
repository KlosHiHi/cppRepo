#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "ИСПП-31\n";
    cout << "Власов Панов\n";
    cout << "2024\n";
    int a, b;
    cout << "Введите первое число ";
    cin >> a;
    cout << "Введите второе число ";
    cin >> b;
    cout << a << " + " << b << " = ";
    cout << a + b << endl;
    cout << a << " - " << b << " = ";
    cout << a - b << endl;
    cout << a << " * " << b << " = ";
    cout << a * b << endl;
    cout << a << " / " << b << " = ";
    cout << round((float(a) / float(b)) * 100) / 100 << endl;
    cout << a << " % " << b << " = ";
    cout << a % b << endl;
}
