#include "header.h"

bool bigger(int a, int b, int& big) {
	if (a == b) return true;
	if (a > b) big = a;
	else big = b;

	return false;
}

void five_1_m() {
	int num1 = 0, num2 = 0,num3=0;
	cout << "두 수를 입력 하세요" << endl;
	cout << ">>";
	cin >> num1;
	cin >> num2;
	if (bigger(num1, num2, num3))
		cout << "두 수가 같습니다." << endl;
	else
		cout << "큰수는 : " << num3 << endl;
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
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;
}

class Accumulator {
	int value;
public:
	Accumulator(int value) { this->value = value; }
	Accumulator& add(int n);
	int get() { return value; }
};

Accumulator& Accumulator::add(int n) {
	value += n;
	return *this;
};

void five_3_m() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // acc의 value 멤버가 28이 된다.
	cout << acc.get() << endl; // 28 출력
}