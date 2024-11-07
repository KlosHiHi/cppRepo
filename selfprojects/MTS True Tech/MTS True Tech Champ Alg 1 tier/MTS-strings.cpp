#include <iostream>
#include <string>
using namespace std;
//Страшно выглядящая задачка про MTS-строки

int main() {
    bool result = 0;
    string string;
    cin >> string;
    for (int i = 0; i < string.length(); i++) {
        if (string[i] == 'M') {
            for (i + 1; i < string.length(); i++) {
                if (string[i] == 'T') {
                    for (i + 1; i < string.length(); i++) {
                        if (string[i] == 'S')
                            result = 1;
                        else continue;
                    }

                }
                else continue;
            }
        }
        else continue;
    }
    cout << result << endl;
    return 0;
}