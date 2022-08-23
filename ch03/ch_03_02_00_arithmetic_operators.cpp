// ch_03_02_00_arithmetic_operators.cpp
#include <iostream>

int main()
{
	using namespace std;

	// 단항 연산자는 붙여서 쓰는 것을 추천
	// 띄어놓으면 헷갈리기 쉽다.
	// int y = 1 - (-x);
	// int y = 1 - (-x) -> // int y = 1 + x; 단순화한다.

	// int x = 7;
	// int y = 4;
	// int z = x % y;

	// 정수와 실수 나머지가 다르다.
	// cout << x / y  << endl;
	// cout << float(x) / y << endl;
	// cout << x / float(y) << endl;
	// cout << float(x) / float(y) << endl;

	// cout << -5 / 2 << endl;
	// // -2.5, c++11부터는 뒤에를 절삭한다. -2가 된다.
	// cout << -5 % 2 << endl;

	cout << 255 % 2 % -2 << endl;
	cout << 255 % 5 % -2 << endl;
	cout << 255 % (5 % -2) << endl;
	cout << -25 % 17 << endl;


	// 나머지 연산
	// 왼쪽 숫자가 음,양수인지에 따라서 달라진다.

	return (0);
}


