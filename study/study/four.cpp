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