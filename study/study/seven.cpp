#include "header.h"

class Book {
	string name;
	int coin;
	int page;
public : 
	Book(string name = NULL, int coin = 0, int page = 0) { this->name = name, this->coin = coin, this->page = page; }
	void show() { cout << name << "\t" << coin << "원\t" << page << " 페이지" << endl; }
	friend Book operator += (Book& op1, int num);
	friend Book operator -= (Book& op1, int num);
};

Book operator+= (Book& op1, int num) {
	op1.coin += num;
	
	return op1;
}

Book operator-= (Book& op1, int num) {
	op1.coin -= num;

	return op1;
}

void seven_1_m() {
	Book a("청춘", 20000, 300), b("미래" ,30000, 500);

	a += 500;
	b -= 500;

	a.show();
	b.show();
}

class Matrix {
	int num[4];
public:
	Matrix() { for (int i = 0; i<4; i++) num[i] = 0; }
	Matrix(int a1, int a2, int b1, int b2) {
		num[0] = a1;
		num[1] = a2;
		num[2] = b1;
		num[3] = b2;
	}
	void show(){cout << "Matrix = { ";for (int i = 0; i < 4; i++) cout << num[i] << ' ';cout << "}" << endl;}
	friend Matrix operator +(Matrix &op1, Matrix &op2);
	friend Matrix operator +=(Matrix &op1, Matrix &op2);
	friend bool operator ==(Matrix &op1, Matrix &op2);
};

Matrix operator +(Matrix &op1, Matrix &op2) {
	Matrix tmp;
	for (int i = 0;i < 4;i++) {
		tmp.num[i] = op1.num[i] + op2.num[i];
	}
	return tmp;
};

Matrix operator +=(Matrix &op1, Matrix &op2) {
	
	for (int i = 0;i < 4;i++) {
		op1.num[i] = op1.num[i] + op2.num[i];
	}
	return op1;
};

bool operator ==(Matrix &op1, Matrix &op2) {

	for (int i = 0;i < 4;i++) {
		if (op1.num[i] != op2.num[i]) return false;
	}
	return true;
};

void seven_2_m() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); 	b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}