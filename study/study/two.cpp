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

void two_2() {
	int k, n = 0;
	int sum = 0;

	cout << "�� ���� �Է��ϼ���>>";
	
	cin >> n;
	for (k = 1;k <= n;k++)
		sum += k;
	
	cout << "1���� " << n << "������ ����" << sum << "�Դϴ�. \n";
}