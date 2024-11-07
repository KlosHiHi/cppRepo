#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

struct Node {
	int data;
	Node* next;
	Node(int data) {
		this->data = data;
		this->next = nullptr;
	}
};

struct Stack {
	Node* top;
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
			return NULL;
		data = top->data;
		top = top->next;
		return data;
	}

	int pick() {
		int data;
		if (top == nullptr)
			return NULL;
		data = top->data;
		return data;
	}

	void pushElements(unsigned quantity, Stack* stack) {
		srand(time(0));
		for(int i = 0; i < quantity; i++)
			stack->push(rand() % 10);
	}

	void pickElements(unsigned quantity, Stack* stack) {
		int* bufer = new int[quantity];

		for (int i = 0; i < quantity; i++) {
			bufer[i] = stack->pick();
			top = top->next;
		}

		for (int j = 0; j < quantity; j++) {
			cout << bufer[j] << " ";
			stack->push(bufer[j]);
		}
		delete[] bufer;
	}

	void popQuanEl(unsigned quantity, unsigned forsaken, Stack* stack) {
		if (forsaken > quantity)
			cout << "ОШИБКА!";
		for (int i = 0; i < forsaken; i++)
			cout << stack->pop() << " ";
	}

	double arifmeticMean(Stack* stack, unsigned quantity, unsigned forsaken) {
		unsigned newQuantity = quantity - forsaken;
		int* bufer1 = new int[quantity];
		double sum = 0;
		for (int i = 0; i < newQuantity; i++) {
			bufer1[i] = stack->pick();
			top = top->next;
		}
		for (int i = (newQuantity - 1); i >= 0; i--) {
			sum += bufer1[i];
			stack->push(bufer1[i]);
		}
		delete[] bufer1;
		return round((sum / newQuantity) * 1000) / 1000;
	}

	void pickAll(Stack* stack) {
		for (int i = 0; top != nullptr; i++)
			cout << stack->pop() << " ";
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	unsigned quantity = 0, forsaken = 0;
	Stack* stack = new Stack();
	
	cout << "Введите количество элементов в СТЕКЕ: ";
	cin >> quantity;
	stack->pushElements(quantity, stack);
	cout << "Первое задание: *невидимое*\n";

	cout << "\nВторое задание: ";
	stack->pickElements(quantity, stack);

	cout << "\n\nСколько элементов вывести: ";
	cin >> forsaken;
	cout << "Третье задание: ";
	stack->popQuanEl(quantity, forsaken, stack);

	cout << "\n\nЧетвёртое задание: " << stack->arifmeticMean(stack, quantity, forsaken);

	cout << "\n\nПятое задание: ";
	stack->pickAll(stack);
	cout << endl;

	return 0;
}