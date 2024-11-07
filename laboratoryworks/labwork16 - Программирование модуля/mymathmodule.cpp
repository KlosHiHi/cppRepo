#include "mymathmodule.h"

float devide(float a, float b) {
	return a / b;
}

int findmax(int* num, int numQ) {
	int max = num[0];
	for (int i = 1; i < numQ; i++) {
		if (num[i] > max)
			max = num[i];
	}
	return max;
}

int findmin(int* num, int numQ) {
	int min = num[0];
	for (int i = 1; i < numQ; i++) {
		if (num[i] < min)
			min = num[i];
	}
	return min;
}

int fact(int quantity) {
	int factorial = 1;
	for (int i = 2; i <= quantity; i++) {
		factorial = factorial * i;
	}
	return factorial;
}