// ch_02_02_00_integers.cpp

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main()
{

	short       s = 1;
	// int         i = 1;
	long        l = 1;
	long long	ll = 1;
	unsigned	un_s;

	// cout << sizeof(short) << endl;
	// cout << sizeof(int) << endl;
	// cout << sizeof(long) << endl;
	// cout << sizeof(long long) << endl;

	// #include <cmath>
	// cout << std::pow(2 , sizeof(short) * 8 - 1) - 1 << endl;
	// #include <limits>
	// cout << std::numeric_limits<short>::max() << endl;
	// cout << std::numeric_limits<short>::min() << endl;
	// cout << std::numeric_limits<short>::lowest() << endl;

	s = 32767;
	// s = s + 1; // 32768 ()
	// overflow
	// cout << "32768? " << s << endl;

	// s = std::numeric_limits<short>::min();
	// s = s - 1; // 32768 ()
	// cout << "min()? " << s << endl;

	// un_s = std::numeric_limits<unsigned short>::max();
	// cout << "unsigned short : " << un_s << endl;
	// cout << "unsigned short max overflow : " << un_s + 1 << endl;
	// un_s = std::numeric_limits<unsigned short>::min();
	// cout << "unsigned short : " << un_s << endl;
	// cout << "unsigned short min overflow: " << un_s - 1 << endl;
	// un_s = std::numeric_limits<unsigned short>::max();

	unsigned int un_i = -1;
	cout << "unsigned int un_i = -1 " << un_i << endl;

	// 정수 연산이므로 소수점이 절삭된다.
	int i = 22 / 4;
	cout << "i = 22 / 4 -> " << i << endl;

	return (0);
}