#include <iostream>
#include <string>
using namespace std;

/*
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 5, b = 3;
	cout << "A: " << a << " B: " << b << endl;
	swap(a, b); // мен€ютс€ значени€ми
	cout << "A: " << a << " B: " << b << endl;
}
*/
/*
void hello() {
	cout << "Hello world" << endl;
}

int sum(int a, int b) {
	return a + b;
}

int main() {
	hello();

	cout << sum(5,4) << endl;
}
*/
/*
class test {
private:
	int num;

public:
	int getNum() {
		return num;
	}

	void setNum(int val) {
		if (val > 0) {
			num = val;
		}
	}
};
*/
/*
void print1() {
	static int n = 1;
	cout << n << endl;
	n++;
}
void print2() {
	int n = 1;
	cout << n << endl;
	n++;
}
int main() {
	print1();
	print1();
	print1();

	print2();
	print2();
	print2();
}
*/
/*
int number = 0;
void printPeople(string, unsigned int);

int main() {
	printPeople("Nick", 19);
	sum(3.444, 5);
}

void printPeople(string name, unsigned int age = 18) {
	cout << "name: " << name << ", age: " << age << endl;
}
*/
auto sum(auto, auto);

auto sum(auto x, auto y) {
	cout << x + y << endl;
}
