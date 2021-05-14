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
	cout << year << "�⵵, " << title << ", " << author << endl;
}

void ten_2_m() {
	vector<Book2> v;
	int year=0;
	string title, author;
	Book2 p;
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;

	while (1) {
		cout << "�⵵ >>"; cin >> year; cin.ignore();
		if (year == -1) break;
		cout << "å �̸� >>";getline(cin, title);
		cout << "���� >>";getline(cin, author);

		p.set(title, author, year);
		v.push_back(p);
	}

	cout << "�� �԰�� å�� " << v.size() << "���Դϴ�." << endl;

	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ��� >>"; getline(cin, author);

	for (int i = 0;i < v.size();i++) {
		if (v[i].getAuthor() == author) v[i].show();
	}
	cout << "�˻��ϰ��� �ϴ� �⵵ �̸��� �Է��ϼ��� >>"; cin >> year; cin.ignore();
	for (int i = 0;i < v.size();i++) {
		if (v[i].getYear() == year) v[i].show();
	}
}