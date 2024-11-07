#include <iostream>
using namespace std;


struct Bag {
    double cash = 0.00;
};

struct Person { //Создание структуры
    string name;
    int age;
    Bag bag;

    Person(string name, int age = 18) {
        this->name = name;
        this->age = age;
    }

    string getName() {
        return name; //Свойство
    }

    void setName(string val) {
        name = val; //Метод
    }

    //Переопределение оператора
    Person operator *(Person p) {
        return Person("Child", 0);
    }
};

struct Category {
    string name;
    Category* child; //дочерняя категория
    Category* parent;
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Category root{ "Root", nullptr, nullptr };
    Category computers{ "Computers", nullptr, &root };
    Category pc{ "PC", nullptr, &computers }; //Может быть множество подкатегорий
    root.child = &computers;
    computers.child = &pc;

    printCategory(&root);

    Person p1("Fred");
    Person p2("Kate");
    Person persons[] = { {"Liam", 17}, {"David", 60}, {"Genry", 35}, {"Maksim", 12} };
    
    persons[0].setName("Fred");
    persons[0].bag.cash = 100.00;
    for (auto& p : persons)
        cout << p.name << endl << p.age << endl << p.bag.cash << "$" << endl;

    Person p3 = p1 * p2;

    return 0;
}

void printCategory(Category* category) {
    cout << category->name << endl;
    if (category->child)
        printCategory(category->child);
}

