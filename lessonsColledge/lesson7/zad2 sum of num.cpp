#include <iostream> 
using namespace std;
//Программа считает сумму каждого числа по отдельности.
int sum(int);

int main() {
    int a = 1234;
    cout << sum(a);
}

int sum(int a) {
    if (a == 0)
        return 0;
    return (a % 10) + sum(a / 10);
}