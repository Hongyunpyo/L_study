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

class Point {
	int x, y;
public:
	Point(int x, int y) {
		this->x = x; this->y = y;
	}
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point {
	string color;

public :
	ColorPoint(int x, int y, string color);
	void setPoint(int x, int y);
	void setColor(string color);
	void show();
};

ColorPoint::ColorPoint(int x, int y, string color) : Point(x, y) {
	this->color = color;
}

void ColorPoint::setPoint(int x, int y) {
	move(x, y);
}

void ColorPoint::setColor(string color) {
	this->color = color;
}

void ColorPoint::show() {
	cout << color << "색으로 (" << getX() << " ," << getY() <<  ")에 위치한 점 입니다." << endl;
}

void eight_2_m() {
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}