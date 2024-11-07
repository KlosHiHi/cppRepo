#include <iostream>
#include <cmath>
using namespace std;
//Задача считает по формуле 1^k+2^k+3^k+...+N^k. N - numbers, k - degree.
int main()
{
    setlocale(LC_ALL, "Russian");
    int number, degree, sum = 0;

    cout << "Введите количество чисел: ";
    cin >> number;
    cout << "Введите степень k: ";
    cin >> degree;

    for (int i = 0; i <= number; i++) 
        sum += pow(i, degree);
    
    cout << "Итоговая сумма: " << sum << endl;

    return 0;
}
