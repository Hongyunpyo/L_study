#include "header.h"


template <class T> 
T biggest(T x[], int y) {
	T re=x[0];
	for (int i = 0;i < y;i++) {
		if (re < x[i])
			re = x[i];
	}

	return re;
}

void ten_1_m() {
	int x[] = { 1,10,100,5,4 };

	cout << biggest(x, 5) << endl;
}