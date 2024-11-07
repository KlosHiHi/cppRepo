#include <iostream>

using namespace std;

int main()
{
    int arr[10]{}, arr2[10]{};

    for (int i = 0; i < 10; i++) {
        arr[i] = 1 + rand() % 20;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 2; i < 11; i++) {
        for (int j = 0; j < 10; j++) {
            arr2[j] = arr[j] * i;
            cout << arr2[j] << " ";
        }
        cout << endl;
    }

    return 0;
}