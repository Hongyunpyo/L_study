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
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter {
protected:
	virtual string getSourceString() { return "원"; }
	virtual string getDestString() { return "달러"; }
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