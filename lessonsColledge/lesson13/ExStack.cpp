#include <iostream>
using namespace std;
//—тек хранит до 10 элементов, если добавл€етс€ больше,то формируетс€ второй стек.



template <typename T>
struct Node {
    T data;
    Node* next;
    Node(T data) {
        this->data = data;
        this->next = nullptr;
    }
};


template <typename T>
struct Stack {
    Node<T>* top;
    Stack() {
        this->top = nullptr;
    }
    void push(T data) { 
        Node<T>* newNode = new Node<T>(data);
        newNode->next = top;
        this->top = newNode;
    }
    T pop() {
        T data;
        if (top == nullptr) 
            return NULL;
        data = top->data;
        top = top->next;
        return data;
    }
};

template <typename T>
struct limitsForStack10 {
    Stack<Stack<T>>* stacks;
    Stack<T>* current;
    int count = 0;
    int length;
    limitsForStack10(int length = 10) {
        stacks = new Stack<Stack<T>>();
        this->length = length;
        this->current = nullptr;
    }
    void push(T data) {
        if (count % length == 0) {
            if (current != nullptr)
                stacks->push(current);
            current = new Stack<T>();
        }
        current->push(data);
        count++;
    }
    T pop() {
        T data = current->pop();
        if (count % length == 0) {
            current = stacks->pop();
        }

        return data;
    }
};

int main() {
    setlocale(LC_ALL, "ru");

    limitsForStack10<int>* stk = new limitsForStack10<int>();


    return 0;
}
