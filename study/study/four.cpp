#include "header.h"

class Color {
	int red, green, blue;

public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r, green = g, blue = b; }
	void setColor(int r, int g, int b) { red = r, green = g, blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};

void four_1_m() {
	Color screenColor(255, 0, 0);
	Color *p;
	p = &screenColor;
	p->show();
	Color colors[3];
	p = colors;

	p->setColor(255, 0, 0);
	(p + 1)->setColor(0, 255, 0);
	(p + 2)->setColor(0, 0, 255);

	for (int i = 0; i < 3;i++) {
		(p + i)->show();
	}
}

void four_2_m() {
	string s,r;
	
	cout << "아래에 한줄을 입력하세요 (exit 종료)" << endl;
	
	while (1) {
		s.clear();
		r.clear();
		cout << "<<";
		getline(cin, s, '\n');

		if (s == "exit") break;


		for (int i = s.length();i > 0;i--) {
			r.append(s,i-1,1);
		}

		cout << "결과: " << r << endl;
	}
	

}

class Person {
	string name;
public :
	Person() { this->name.clear(); };
	Person(string name) { this->name = name; }
	string getName() { return name; }
};

class Family{
	Person *p;
	string name;
	int size;
public :
	Family() {};
	Family(string name, int size) { this->name = name; this->size = size; p = new Person[size]; };
	void setName(int num, string name);
	void show();
	~Family() {};
};

void Family::setName(int num, string name) {
	Person re(name);
	*(p+num) = re;
};

void Family::show() {
	for (int i = 0 ;i < size;i++) {
		cout << (p+i)->getName() << "\t";
	}
	cout << endl;
};

void four_3_m() {
	Family *simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr.simpson");
	simpson->setName(1, "Mrs.simpson");
	simpson->setName(2, "Bart simpson");
	simpson->show();
	delete simpson;
}

class Histogram {
	string s;
	int size;
	int count[26];
public :
	Histogram() { s = ""; size = 0; }
	Histogram(string s) { this->s = s; size = 0;}
	void put(string s) { this->s.append(s); }
	void putc(char c) { char buf[] = { c,'\0' }; this->s.append(buf); }
	void print();
};

void Histogram::print() {
	for (int i = 0; i<26; i++)
		count[i] = 0; 

	cout << s << endl << endl;

	for (int i = 0; i < s.length(); i++) {
		if (isalpha(s[i])) { // 알파벳이면 대문자 1, 소문자 2. 아니면 0
			char c = tolower(s[i]); //tolower 대문자를 소문자로
			count[c - 'a']++;
		}
	}

	for (int i = 0; i<26; i++) size += count[i]; // 전체 알파벳 수 더하기
	cout << "총 알파벳 수 " << size << endl;
	cout << endl;

	for (int i = 0; i<26; i++) {
		cout << char('a' + i) << " (" <<count[i] << ")" << '\t' << ": ";
		for (int j = 0; j<count[i]; j++)
			cout << '*';
		cout << endl;
	}

}
void four_4_m() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, \n");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}