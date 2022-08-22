// ch_02_07_char_type.cpp

#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	// char    c1(65);
	// char    c2('A');

	// cout << "c1 : " << c1 << endl;
	// cout << "c2 : " << c2 << endl;

	// cout << char(65) << endl;
	// cout << int('A') << endl;

	// cout << static_cast<char>(65) << endl;
	// cout << static_cast<char>('A') << endl;

	// char ch(97);
	// cout << ch << endl;
	// cout << static_cast<int>(ch) << endl; //변수도 가능하다.
	// cout << ch << endl;

	// cin >> c1;
	// cout << c1 << " " << static_cast<int>(c1) << endl;

	// cin >> c1;
	// cout << c1 << " " << static_cast<int>(c1) << endl;

	// cin >> c1;
	// cout << c1 << " " << static_cast<int>(c1) << endl;
	// cout << c1 << " " << static_cast<int>(c1) << endl;

	cout << int('\n');
	cout << endl;
	// endl은 버퍼에 있는 것을 모두 출력하고 개행한다.(버퍼를 비운다.)

	cout << int('\t') << endl;
	cout << "This is first line \a second line";

	wchar_t	c;
	char16_t c3; // unicode 문자 사이즈가 크다 

	return (0);
}