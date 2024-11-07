#include <iostream>
using namespace std;

//Задание 1 - Рекурсивный алгоритм суммы элементов в массиве (массив в функцию и его размер)
double arrSum(double arr[], unsigned size);

int main()
{
    setlocale(LC_ALL, "Russian");

    double arr[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    unsigned size = sizeof(arr)/sizeof(arr[1]);
    cout << arrSum(arr, size);
    
    return 0;
}

double arrSum(double arr[], unsigned size) {
    if (size <= 0)
        return 0;
    return arr[size - 1] + arrSum(arr, size - 1);
}