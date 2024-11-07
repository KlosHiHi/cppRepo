#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int v;
    float t;
    cout << "Введите скорость: ";
    cin >> v;
    cout << "\n";
    cout << "Введите время: ";
    cin >> t;
    cout << "\n";
    float s = round((t * v) * 1000) / 1000;
    cout << "Результат:" << s;
}
