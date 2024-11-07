#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const double pi = 3.141;
    double R;
    cout << "Введите радиус ";
    cin >> R;
    cout << "Вычисляем площадь\n" << "S = ";
    cout <<  (round((4 * pi * (R * R) * 1000))) / 1000;
    return 0;
}

