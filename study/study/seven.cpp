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