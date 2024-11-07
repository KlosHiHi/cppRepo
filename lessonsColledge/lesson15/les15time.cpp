#include <iostream>
using namespace std;

class Data {
private:
    unsigned mounth;
    unsigned day;
    unsigned year;
public:
    Data(unsigned day = 1, unsigned mounth = 1, unsigned year = 2000) : day(day), mounth(mounth), year(year){}
    int operator[](unsigned val) const {
        switch (val) {
        case 1: return day;
        case 2: return mounth;
        case 3: return year;
        default: break;
        }
    }
};

string toString(unsigned mounth){
    switch (mounth) {
    case 1: return "Январь";
    case 2: return "Февраль";
    case 3: return "Март";
    case 4: return "Апрель";
    case 5: return "Май";
    case 6: return "Июнь";
    case 7: return "Июль";
    case 8: return "Август";
    case 9: return "Сентябрь";
    case 10: return "Октябрь";
    case 11: return "Ноябрь";
    case 12: return "Декабрь";
    default: break;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    Data data;
    int n;

    cout << data[1] << '.' << data[2] << '.' << data[3] << endl << endl;
    cout << "Что вы желаете вывести День[1], Месяц[2], Год[3] - ";
    cin >> n;
    cout << data[n];
    if (n == 1) 
        cout << " день\n\n";
    if (n == 2)
        cout << " месяц\n\n";
    if (n == 3)
        cout << " год\n\n";

    cout << data[1] << ' ' << toString(data[2]) << ' ' << data[3] << endl;
    return 0;
}
