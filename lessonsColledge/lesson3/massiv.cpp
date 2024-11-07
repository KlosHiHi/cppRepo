#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    /*
    int x;
    int arr[6]{1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++) cin >> arr[i];
    cout << endl;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Размер массива " << sizeof(arr) << endl << "Размер одного элемента " << sizeof(arr[0]);
    */

    int massiv[6]{}, s = 0;
    int max = massiv[0];
    cout << "Введите 6 чисел\n\n";
    for (int i = 0; i < 6; i++) {
        cin >> massiv[i];
    }

    cout << "\nВы ввели: ";
    for (int i = 0; i < 6; i++) {
        cout << massiv[i] << " ";
    }

    for (int i = 0; i < 6; i++) {
        if (massiv[i] > max) {
            max = massiv[i];
        }
    }

    cout << "\nСамое большое число в массиве " << max;

    return 0;
}

