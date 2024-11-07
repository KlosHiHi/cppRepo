#include <iostream>
using namespace std;

template <typename T> //Помогает работать с любым типом данных (Шаблон)
struct Node {
    T data;
    Node* next;
    Node(T data) {
        this->data = data;
        this->next = nullptr;
    }
};

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main()  {
    setlocale(LC_ALL, "ru");

    Node<double>* n1 = new Node<double>(2.5); //Класс выставляется при образовании переменной

    cout << add(2, 5) << endl;
    cout << add(1.7, 1.2) << endl;
    cout << add(string("He"), string("llo")) << endl;

    delete n1;
    return 0;
}
