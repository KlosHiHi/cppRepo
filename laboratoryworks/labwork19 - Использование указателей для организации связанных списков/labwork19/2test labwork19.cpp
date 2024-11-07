#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack {
    Node* top;

public:
    Stack() {
        this->top = nullptr;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        this->top = newNode;
    }

    int pop() {
        int data;
        if (top == nullptr)
            return 'F';
        data = top->data;
        top = top->next;
        return data;
    }

    int pick() {
        int data;
        if (top == nullptr) 
            return 'F';
        data = top->data;
        return data;
    }
    //Первое задание, заброс элементов в стек
    void fill(unsigned quantity, Stack* stack) {
        for (int i = 0; i < quantity; i++) 
            stack->push(rand() % 10);
    }
    //Второе задание, вывод
    char printf(unsigned quantity, Stack* stack) {
        if (quantity == 0)
            return NULL;
        return pick() + ' ' + stack->printf(quantity - 1, stack);
    }
    //Третье задание выбор некоторого числа элементов
    int masPop(unsigned forsaken, Stack* stack) {
        return stack->pop();
    }

    int aMean(Stack* stack) {
        int sum = 0;
        while (stack->pick() != 'F') {
            sum += stack->pick();
            cout << stack->pop() << ' ';
        }
    }
};

int main() {
    setlocale(LC_ALL, "Rus");
    unsigned quantity, forsaken;
    Stack* stack = new Stack();
    srand(time(0));
    
    cout << "Введите количество элементов в стеке - ";
    cin >> quantity;
    stack->fill(quantity, stack);

    cout << endl << "Второе задание: " << stack->printf(quantity, stack) << endl;

    cout << "Введите количество извлекаемых элементов - ";
    cin >> forsaken;
    cout << endl << "Третье задание: " << stack->masPop(forsaken, stack) << endl;

    cout << "Пятое задание: ";
    
    aMean = sum / quantity;

    cout << "\n\nЧетвёртое задание: " << aMean << endl;

    delete stack;
    return 0;
}

