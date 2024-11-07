#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    setlocale(LC_ALL, "Russian");
    /*
    int a, b, f, x;
    cout << ("Введите значение a,b,f: \n");
    cout << ("a = ");
    cin >> a;
    cout << ("b = ");
    cin >> b;
    cout << ("f = ");
    cin >> f;
    
    if (a == 0){
        cout << ("Ошибка вычисления");
    }
    else {
        x = (a + b - f / a) + f * a * a - (a + b);
        cout << ("Вычисляем по формуле x = (а + b — f / а) + f * a * a — (a + b) \n");
        cout << "x = ";
        cout << x;
    }
    */
    
    /*
     char letter('a');
     cout << "Букву писать здесь: ";
     cin >> letter;
     letter = letter - 32;
     cout << "Заглавная буква напоняет вас решимостью: " << letter << '\n';
     return 0;
     */
    
    /*
    cout << "tПеревод числа из метров в километры\n";
    float a;
    cout << "Сколько метров : ";
    cin >> a;
    if (a == 1) {
        cout << a << " метр будет " << a / 1000 << " километра " << endl;
    }
    if (a > 1 && a <= 4)
    {
        cout << a << " метрa будет " << a / 1000 << " километра " << endl;
    }
    if (a >= 5 && a < 1000)
    {
        cout << a << " метров будет " << a / 1000 << " километра " << endl;
    }
    if (a == 1000)
    {
        cout << a << " метров будет " << a / 1000 << " километр " << endl;
    }
    if (a > 1000 && a <= 4900)
    {
        cout << a << " метров будет " << a / 1000 << " километрa " << endl;
    }
    if (a >= 5000)
    {
        cout << a << " метров будет " << a / 1000 << " километров " << endl;
    }
    cout << endl;
    return 0;
    */

    cout << "Деление числа на разряды";
    int number;
    cout << "Введите пятизначное число: ";
    cin >> number;
    if (number >= 0 && number <= 9999)
    {
        cout << "Число не пятизначное!";
    }
    else {
        if (number >= 100000) 
    {
        cout << "Это не пятизначное число";
    }
        else {
            cout << "Первая цифра: " << number / 10000 << "\n";
            cout << "Вторая цифра: " << (number / 1000) % 10 << "\n";
            cout << "Третья цифра: " << (number / 100) % 10 << "\n";
            cout << "Четвёртая цифра: " << (number / 10) % 10 << "\n";
            cout << "Пятая цифра: " << number % 10 << "\n";
        cout << endl;
        return 0;
        }
    }
}
