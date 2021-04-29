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

class ArrayUtility {
public:
	static void intToDouble(int source[], double dest[], int size); 
	static void doubleToInt(double source[], int dest[], int size); 
};

void ArrayUtility::intToDouble(int source[], double dest[], int size) {
	for (int i = 0; i<size; i++)
		dest[i] = (double)source[i];
}

void ArrayUtility::doubleToInt(double source[], int dest[], int size) {
	for (int i = 0; i<size; i++)
		dest[i] = (int)source[i];
}

void six_2_m() {
	int x[] = { 1,2,3,4,5 };
	double y[5];
	double z[] = { 9.9, 8.8, 7.7, 6.6, 5.6 };

	ArrayUtility::intToDouble(x, y, 5); // x[] -> y[]
	for (int i = 0; i<5; i++) cout << y[i] << ' ';
	cout << endl;

	ArrayUtility::doubleToInt(z, x, 5); // z[] -> x[]
	for (int i = 0; i<5; i++) cout << x[i] << ' ';
	cout << endl;
}