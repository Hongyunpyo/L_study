#include "header.h"

bool bigger(int a, int b, int& big) {
	if (a == b) return true;
	if (a > b) big = a;
	else big = b;

	return false;
}

void five_1_m() {
	int num1 = 0, num2 = 0,num3=0;
	cout << "�� ���� �Է� �ϼ���" << endl;
	cout << ">>";
	cin >> num1;
	cin >> num2;
	if (bigger(num1, num2, num3))
		cout << "�� ���� �����ϴ�." << endl;
	else
		cout << "ū���� : " << num3 << endl;
}