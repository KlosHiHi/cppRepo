#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;

vector<bool> is_prime(int number, unsigned Prefics) {
    vector<bool> prime(number + 1, true);
    string pref = to_string(Prefics - 8000);
    unsigned long quantityVip = 0;

    prime[0] = prime[1] = false;

    for (int p = 2; p <= sqrt(number); p++) {
        if (prime[p]) {
            for (int i = p; i <= sqrt(number); i += p) {
                prime[i] = false;
                if (i > 99) {
                    string num = to_string(number);
                    for (int i = 0; i < num.length() - 2; i++) {
                        if (pref == num.substr(i, 3))
                            quantityVip += 1;
                    }
                }
            }
        }
    }
    return prime;
}

int main() {
    unsigned long number = 9999999, quantityDef = 0, Prefics;
    cin >> Prefics;
    vector<bool> primes = is_prime(number, Prefics);

    for (int i = 2; i <= number; i++) {
        if (primes[i]) {
            quantityDef += 1;
        }
    }

    cout << quantityDef;
}

/*
unsigned quantityOfNumber(unsigned Prefics) {
    unsigned long long number = 1000000, quantityDef = 0, quantityVip = 0;
    bool blop = false;
    string pref = to_string(Prefics - 8000);

    do {
        string num = to_string(number);
        if (num.find(pref) != string::npos) 
            quantityVip += 1;

        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0)
                blop = false;
        }
        if (blop) quantityDef += 1;

        number += 1;
    } while (number < 10000000);

    return quantityDef, ' ', quantityVip;
    
}

int main()
{
    unsigned Prefics;

    cin >> Prefics;
    cout << quantityOfNumber(Prefics);

    return 0;
}
*/
