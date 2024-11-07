#include <iostream>
using namespace std;

int main()
{
    //циклы в крестах
    /*
    int i = 0;
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
    */
    /*
    int x = 1;
    while (x < 10) {
        x = x * 2;
        cout << x << endl;
    }
    */
    /*
    int x = 1;
    do {
        x = x * 2;
        cout << x << endl;
    } 
    while (x < 100);
    */
    /*
    for (char c : "Hello") {
        cout << c << endl;
    }
    */
    /*
    for (int n : {1, 4, 6, 9}) {
        cout << n << endl;
    }
    */

    /*
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            cout << j * i << "\t";
        }
        cout << endl;
    }
    */

    setlocale(LC_ALL, "Russian");
    cout << "\tЧисла Фибоначчи" << endl;
    int a = 0, b = 1, z, x;
    cout << "Ваше число: ";
    cin >> x;
    if (x == 0)
        cout << "Вы что тупой?";
    if (x >= 1)
        cout << a << " ";
    if (x >= 2)
        cout << b << " ";
    for (int i = 1; i < x; i++){
        z = a + b;
        cout << z << " ";
        a = b;
        b = z;
    }
}
