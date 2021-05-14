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

class Book2 {
	string title; 
	string author;
	int year;
public:
	Book2() {};
	Book2(string title, string author, int year) {
		this->title = title;
		this->author = author;
		this->year = year;
	}
	void set(string title, string author, int year) {
		this->title = title;
		this->author = author;
		this->year = year;
	}
	string getTitle() { return title; }
	string getAuthor() { return author; }
	int getYear() { return year; }
	void show();
};

void Book2::show() {
	cout << year << "년도, " << title << ", " << author << endl;
}

void ten_2_m() {
	vector<Book2> v;
	int year=0;
	string title, author;
	Book2 p;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;

	while (1) {
		cout << "년도 >>"; cin >> year; cin.ignore();
		if (year == -1) break;
		cout << "책 이름 >>";getline(cin, title);
		cout << "저자 >>";getline(cin, author);

		p.set(title, author, year);
		v.push_back(p);
	}

	cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;

	cout << "검색하고자 하는 저자 이름을 입력하세요 >>"; getline(cin, author);

	for (int i = 0;i < v.size();i++) {
		if (v[i].getAuthor() == author) v[i].show();
	}
	cout << "검색하고자 하는 년도 이름을 입력하세요 >>"; cin >> year; cin.ignore();
	for (int i = 0;i < v.size();i++) {
		if (v[i].getYear() == year) v[i].show();
	}
}