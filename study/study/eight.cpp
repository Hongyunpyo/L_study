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
	cout << "�������� " << getRadius() << "�� " << name << endl;
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
	cout << color << "������ (" << getX() << " ," << getY() <<  ")�� ��ġ�� �� �Դϴ�." << endl;
}

void eight_2_m() {
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}

class BaseArray {
private:
	int capacity; // ���� �Ҵ�� �޸� �뷮
	int *mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue :public BaseArray {
	int head, tail;
	int size;
public :
	MyQueue(int num) :BaseArray(num) { head = 0, tail = -1, size = 0; };
	int capacity();
	int length();
	void enqueue(int n);
	int dequeue();
};

int MyQueue::capacity() {
	return getCapacity();
};

int MyQueue::length() {
	return size;
}

void MyQueue::enqueue(int n) {
	if (size == capacity())
		return; 
	put(head, n);
	head++;
	head = head % capacity();
	size++;
}

int MyQueue::dequeue() {
	if (size == 0)
		return -1; 
	size--;
	tail++;
	tail = tail % capacity();
	return get(tail);
}

void eight_3_m() {
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i<5; i++) {
		cin >> n;
		mQ.enqueue(n); // ť�� ����
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ���
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}

void test() {
	
}