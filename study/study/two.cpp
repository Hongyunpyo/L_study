#include "header.h"

//���ڿ� 2�� �Է¹ް� ����, �ٸ��� �� ���
void two_1() {
	string a, b;

	getline(cin, a);
	getline(cin, b);

	if (a == b)
		cout << "����\n";
	else
		cout << "�ٸ���\n";
}