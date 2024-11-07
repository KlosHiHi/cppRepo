#include <iostream>
using namespace std;

enum class WeekDay {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

string WeekDayToString(WeekDay day) {
    switch (day) {
    case WeekDay::Monday:
        return "Понедельник";
    case WeekDay::Tuesday:
        return "Вторник";
    case WeekDay::Wednesday:
        return "Среда";
    case WeekDay::Thursday:
        return "Четверг";
    case WeekDay::Friday:
        return "Пятница";
    case WeekDay::Saturday:
        return "Суббота";
    case WeekDay::Sunday:
        return "Воскресенье";
    default:
        return "Ошибка";
    }
}

class Point3D {
private:
    int x;
    int y;
    int z;
    
public:
    Point3D(int x, int y, int z) : x(x), y(y), z(z) {}
    int operator[](unsigned index) const {
        switch (index) {
        case 0: return x;
        case 1: return y;
        case 2: return z;
        default:
            break;
        }
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    Point3D point(1, 2, 3);
    
    cout << point[0] << endl << point[1] << endl << point[2] << endl << endl;

    WeekDay day = WeekDay::Thursday;
    cout << (int)day << endl << WeekDayToString(day);



    return 0;
}

