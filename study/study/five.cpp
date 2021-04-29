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

class MyIntStack {
	int p[10];
	int tos;

public:
	MyIntStack() { tos = 0; }
	bool push(int n);
	bool pop(int &n);
};
bool MyIntStack::push(int n) {
	if (tos == 10)
		return false;
	p[tos] = n;
	tos++;
	return true;
}

bool MyIntStack::pop(int& n) {
	if (tos == 0)
		return false;
	tos--;
	n = p[tos];
	return true;
}

void five_2_m() {
	MyIntStack a;
	for (int i = 0;i < 11;i++) {
		if (a.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << " ��° stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " ��° stack empty";
	}
	cout << endl;
}