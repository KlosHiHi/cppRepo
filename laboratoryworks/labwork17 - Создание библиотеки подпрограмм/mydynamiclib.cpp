#include "pch.h"
#include <utility>
#include <limits.h>
#include "mydynamiclib.h"

float add(float a, float b) {
	return a + b;
}

float subtract(float a, float b) {
	return a - b;
}

long long factorial(int n) {
	if (n < 0)
		return -1;
	if (n > 0)
		return n * factorial(n - 1);
	return 1;
}

int search(char* arr, unsigned size, char sign) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == sign)
			return i;
	}
	return 0;
}