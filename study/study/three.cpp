#include "header.h"


class Random {
	int num;

	public:
		int next();
		int nextInRange(int x, int y);
};

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
	srand((unsigned)time(0));
	cout << "0 에서" << RAND_MAX << "까지의 랜덤 정수 10개" << endl;

	for (int i = 0;i < 10;i++) {
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "2 에서 4 까지의 랜덤정수 10개 " << endl;

	for (int i = 0;i < 10;i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}

	cout << endl;
}