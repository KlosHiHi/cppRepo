#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

    float cols, rows, x, sum = 0;
    int min = -150, numc;

    cout << "Введите количество строк ";
    cin >> rows;
    cout << "Количество столбцов ";
    cin >> cols;
    cout << endl;
    float** arr = new float* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new float[cols];
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

    cout << "Введите номер столбца ";
    cin >> numc;

    for (int i = 0; i < rows; i++) {
        if (numc > cols) break;
        sum += arr[i][numc - 1];
    }

    sum = round(sum * 10) / 10;
    cout << "Сумма чисел в " << numc << " столбце равна " << sum;

	return 0;
}