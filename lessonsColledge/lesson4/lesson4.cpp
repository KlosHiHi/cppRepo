#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int a[3][2]{ {1, 2}, { 3,4 }, { 5,6 } };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] << " ";
        }
    }

    cout << endl;
    a[1];

    for (auto& nums: a)
        for (auto n : nums) 
            cout << n << " ";

}
