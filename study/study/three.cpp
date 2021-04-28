#include "header.h"


class Random {
	int num;

	public:
		Random();
		int next();
		int nextInRange(int x, int y);
};

Random::Random() {
	srand((unsigned)time(0)); // ������ seed�� �����Ͽ� �� ������ �ٸ� ���� ���� ������ �Ѵ�.
}

int Random::next() {
	num = rand();

	return num;
}

int Random::nextInRange(int x, int y) {
	num = rand()%(y+1-x)+x;

	return num;
}

void three_1_m() {
	Random r;
	
	cout << "0 ����" << RAND_MAX << "������ ���� ���� 10��" << endl;

	for (int i = 0;i < 10;i++) {
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "2 ���� 4 ������ �������� 10�� " << endl;

	for (int i = 0;i < 10;i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}

	cout << endl;
}

class Oval {
	int width, height;
	
public:
	Oval();
	Oval(int w, int h);
	~Oval();

	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};

Oval::Oval() {
	width = height = 1;
}
Oval::Oval(int w, int h) {
	width = w;
	height = h;
}
Oval::~Oval() {
	cout << "width:" << width << "  height:" << height << endl;
}

int Oval::getWidth() {
	return width;
}
int Oval::getHeight() {
	return height;
}
void Oval::set(int w, int h) {
	width = w;
	height = h;
}
void Oval::show() {
	cout << width << "," << height << endl;
}

void three_2_m() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();

	cout << b.getWidth() << "," << b.getHeight() << endl;
}