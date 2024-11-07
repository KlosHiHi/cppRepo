#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    /*for (int i = 0; i < 15; i++) {
        if (i == 4) continue;

        if (i == 10) break;

        cout << i << endl;
    }
    */

    /*
    int num = 15;
    int& ref = num;

    cout << &ref << endl;
    cout << &num << endl;
    cout << num << endl;
    ref = 20;
    cout << num << endl;
    */

    /*
    int numbers[]{ 1,2,3,4,5 };
    for (auto& n : numbers) {
        n = n * n;
    }
    for (auto n : numbers) {
        cout << n << " ";
    }
    */
    
    
    int a, b, c = 1;
    bool blop = false;
    cout << "\t\tПроверка числа на простоту" << endl;
    while (c != 0) {
        cout << endl << "Введите ваше число ";
        cin >> a;
        for (int i = 2; i <= sqrt(a); i++) {
            b = a % i;
            if (b == 0) {
                blop = false;
            }
        }
        if (blop) cout << "Число " << a << " простое" << endl;
        if (a == 0) cout << "Это ноль!" << endl;
        if (a == 1) cout << "Ваше число - единица" << endl;
        if (a == 2) cout << "Число " << a << " простое" << endl;
        else cout << "Ваше число " << a << " не простое" << endl;
    }

    /*
    int a, c = 1;
    cout << "\t\tПроверка числа на простоту" << endl;
    while (c != 0) {
        cout << endl << "Введите ваше число ";
        cin >> a;
        if (a == 0) cout << "Это ноль!" << endl; break;
        if (a == 1) cout << "Ваше число - единица" << endl; break;
        if (a == 2) cout << "Число " << a << " простое" << endl; break;
        if (a % 2 != 0 || a % 3 != 0) {
            cout << "Число " << a << " не простое" << endl;
            break;
        }
        else; {
            cout << "Число " << a << " простое" << endl;
            break;
        }
    */
}

