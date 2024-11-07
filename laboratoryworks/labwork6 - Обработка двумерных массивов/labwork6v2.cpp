#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));

    // Вариант 2
    // Задание 1
    int ar[3][3]{};
    cout << "Введите значения массива\n\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            ar[i][j] = rand();
        }
    }
    
    cout << endl << "Ваш Массив\n\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Задание 2
    float cols, rows, x;
    int min = -150;

    cout << "Введите количество строк ";
    cin >> rows;
    cout << "Количество столбцов ";
    cin >> cols;
    cout << endl;
    float** arr = new float*[rows]; //Массив указателей на строки
    for (int i = 0; i < rows; i++) {
        arr[i] = new float[cols]; //Каждая строка — одномерный массив
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            x = rand();
            arr[i][j] = min + x / 100;
        }
    }
    
    cout << "Ваш массив\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " | ";
        }
        cout << endl;
    }
    cout << endl;

    // Задание 3
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < 0) arr[i][j] = 0;
            else continue;
        }
    }
    cout << "Изменённый массив\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " | ";
        }
        cout << endl;
    }

    return 0;
}

