#include <iostream>
using namespace std;

/*
unsigned long long factorial(unsigned);
unsigned long long fib(unsigned);

int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[10]{ 5, 2, -2, 4, -2, 3, 6, 20, -2, 5 };

    cout << factorial(5) << endl;
    cout << fib(5) << endl;

    return 0;
}

//factorial(5)
// 5 * factorial(4)
//5 * 4 * factorial(3)
//5 * 4 * 3 * factorial(2)
//5 * 4 * 3 * 2 factorial(1)
//5 * 4 * 3 * 2 * 1

unsigned long long factorial(unsigned n) {
    if (n > 1)
        return n * factorial(n - 1);
    return 1;
}

//Числа Фибоначчи - рекурсивное решение
//fib(4)
//fib(3) + fib(2)
//fib(2) + fib(1) + fib(1) + fib(0)
//fib(1) + fib(0) + fib(1) + fib(1) + fib(0)
//1 + 0 + 1 + 1 + 0 = 3
//0 1 1 2 3
unsigned long long fib(unsigned n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
*/
//Указатель на функцию
void hello() {
    cout << "Hello C++" << endl;
}
void hi() {
    cout << "Hi" << endl;
}

int main() {

    void (*message) ();
    message = hello;
    message();
    message = hi;
    message();

}