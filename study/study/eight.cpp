#include "header.h"

class Circle {
	int radius;
public :
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius, string name);
	void show();
};

NamedCircle::NamedCircle(int radius, string name)
	: Circle(radius) {
	this->name = name;
}

void NamedCircle::show() {
	cout << "반지름이 " << getRadius() << "인 " << name << endl;
}

void eight_1_m() {
	NamedCircle waffle(3, "waffle");
	waffle.show();
}