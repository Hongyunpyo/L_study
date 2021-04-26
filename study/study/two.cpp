#include "header.h"

//문자열 2개 입력받고 같다, 다르다 를 출력
void two_1() {
	string a, b;

	getline(cin, a);
	getline(cin, b);

	if (a == b)
		cout << "같다\n";
	else
		cout << "다르다\n";
}

void two_2() {
	int k, n = 0;
	int sum = 0;

	cout << "끝 수를 입력하세요>>";
	
	cin >> n;
	for (k = 1;k <= n;k++)
		sum += k;
	
	cout << "1에서 " << n << "까지의 합은" << sum << "입니다. \n";
}