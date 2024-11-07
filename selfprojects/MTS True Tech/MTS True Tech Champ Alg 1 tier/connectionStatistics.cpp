#include <iostream>
using namespace std;
//Задача на статистику соединения

int main() {
    unsigned short n;
    unsigned long sum = 0;
    bool correctWork = 0;
    cin >> n;
    unsigned long* arrI = new unsigned long[n];
    for (int i = 0; i < n; i++) {
        cin >> arrI[i];
        sum += arrI[i];
    }
    if (sum % 2 == 0)
        correctWork = 1;
    cout << correctWork << endl;
    return 0;
}