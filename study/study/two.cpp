#include "header.h"

//문자열 2개 입력받고 같다, 다르다 를 출력
void two_1() {
	string a, b;

	getline(cin, a);
	getline(cin, b);

	if (a == b)
		cout << "같다\n";
	else
		cout << "다르다\n";
}