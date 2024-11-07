#include <iostream>
#include <cmath>
using namespace std;
//Задака - определение угла брошенного тела, по скорости и времени.
int main()
{
    setlocale(LC_ALL, "ru");

    float speed, time, angel;
    const float g = 9.8, pi = 3.14159;
    cout << "V = ";
    cin >> speed;
    cout << "T = ";
    cin >> time;
    
    double a = asin(g * time / (2 * speed));
    a = round((a * (180 / pi)) * 1000) / 1000;

    speed != 0 ? time >= 0 ? cout << "angel a = " << a << endl : cout << "Ошибка! Машину времени ещё не придумали!" << endl : cout << "Ошибка в расчётах!" << endl;

    return 0;
}
