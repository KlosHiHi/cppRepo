#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    //Задача 1

    int nday;
    cout << "Выберите день недели ";
    cin >> nday;

    switch (nday) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << nday << " - Будний день";
            break;
        case 6:
        case 7:
            cout << nday << " - Выходной!!!";
            break;
        default:
            cout << "Нет такого дня недели";
            break;
    }

    cout << endl << endl;

    // Задача 2

    int year, month, ex1, ex2, ex3;
    bool vis;
    cout << "Введите дату вашего рождения: ";
    cout << endl << "Месяц - ";
    cin >> month;
    cout << "Год - ";
    cin >> year;
    
    ex1 = year % 4;
    ex2 = year % 100;
    ex3 = year % 400;

    if (ex1 == 0 && ex2 != 100 || ex3 == 0) {
        cout << year << " - Високосный год" << endl;
        vis = true;
    }
    else {
        cout << year << " - Не високосный год" << endl;
        vis = false;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        cout << "В " << month << " месяце 31 день";
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "В " << month << " месяце 30 дней";
    }

    if (month == 2 && vis == true) {
        cout << "Во " << month << " месяце 29 дней";
    }
    else if (month == 2 && vis == false) {
        cout << "Во " << month << " месяце 28 дней";
    }

    cout << endl << endl;

    // Задача 3

    const float dollar = 91.45 , euro = 101.36;
    float rub, d, e;
    string val;
    cout << "Конвертер валют\n\n";
    cout << "euro = 101.36\ndollar = 91.45\n\n";
    cout << "Введите сумму в рублях ";
    cin >> rub;
    cout << "Выберите валюту [euro] [dollar]\n";
    cin >> val;

    if (rub < 0) {
        cout << "Сначала накопите деньги :(";
    }

    else if (val == "dollar") {
        d = round(rub / dollar * 100) / 100;
        cout << rub << " рублей " << d << " долларов" << endl;
    }

    else if (val == "euro") {
        e = round(rub / euro * 100) / 100;
        cout << rub << " рублей " << e << " евро" << endl;
    }

    else {
        cout << "Вы сломали программу";
    }
    return 0;
}
