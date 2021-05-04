#include "header.h"

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0; 
	virtual string getSourceString() = 0; 
	virtual string getDestString() = 0; 
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter {
protected:
	virtual string getSourceString() { return "��"; }
	virtual string getDestString() { return "�޷�"; }
	virtual double convert(double src);
public:
	WonToDollar(double ratio) : Converter(ratio) { }
};

double WonToDollar::convert(double src) {
	return src / ratio;
}

void nine_1_m() {
	WonToDollar wd(1010); 
	wd.run();
}