/*#include <iostream>
#include <math.h>
using namespace std;

int connectionType(unsigned n, unsigned sum) {
    if (n < 1 or (sum % 2) == 1)
        return 0;
    if (n == 1 and (sum % 2) == 0)
        return sum / 2;
    if ((sum / n) == 2)
        return 0;
    if ((sum / n) > 2)
        return (n - ceil(n/2));
}

int main()
{
    setlocale(LC_ALL, "Rus");

    unsigned n, sum = 0;
    cin >> n;
    unsigned long* arrI = new unsigned long[n];

    for (int i = 0; i < n; i++) {
        cin >> arrI[i];
        sum += arrI[i];
    }
    
    cout << connectionType(n , sum);

    return 0;
}
*/
