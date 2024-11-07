#include <iostream>
using namespace std;

struct Node { //Node - Узел
	int data;
	Node* next;
	Node(int val) {
		this->data = val;
		this->next = nullptr;
	} //Структура данных для Node
};

struct LinkedList {
	Node* head;
	LinkedList() {this->head = nullptr;}
	void print() {
		Node* current = head;
		while (current != nullptr) {
			cout << current->data << " ";
			current = current->next;
		} //реализация динамического массива в виде списка, в который можно добавлять любое количество элементов.
	}
	void insert(int data) {
		Node* newNode = new Node(data);
		newNode->next = head;
		this->head = newNode;
	}
};

int main() {

	LinkedList* linlis = new LinkedList;

	linlis->insert(10);
	linlis->insert(1);
	linlis->insert(5);
	linlis->insert(41);
	linlis->insert(3);
	linlis->insert(0);
	linlis->insert(10);
	linlis->insert(5);

	linlis->print();

	delete[] linlis;

	/*
	int a = 1;
	int* p = &a;

	int* i = new int; //Создание динамичной переменной.
	delete i; //Освобождение памяти
	*/
}