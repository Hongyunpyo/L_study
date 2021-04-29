#include "header.h"

int add_1(int x[], int size, int y[] = NULL) {
	int result = 0;
	for (int i = 0; i<size; i++) 
		result += x[i];
	if (y == NULL)
		return result;

	for (int i = 0; i<size; i++)
		result += y[i];
	return result;
}

void six_1_m() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add_1(a, 5); 
	int d = add_1(a, 5, b);
	cout << c << endl; 
	cout << d << endl; 
}