// ch_04_05_type_conversion.cpp

#include <iostream>
#include <iomanip>
#include <typeinfo>

/*
typeinfo
typeid(4.0) 어떤 데이터 타입인지 알수있다.
*/
int main()
{
	using namespace std;

	// int a = 123;
	// cout << typeid('a').name() << endl;

	// int a = (double)123.0; // 명시적 형변환
	// int a = 123.0; // 암시적 형변환
	// cout << typeid(a).name() << endl;

	// numeric promotion
	// 더 큰 자료형으로 디오
	// float   a = 1.0f;
	// double  d = a;

	// numeric conversion
	// int		i = 1234;
	// float   f = i;

	// float	f = 3.14;
	// int		i = f;

	// double	d = 0.123456789;
	// float	f = d;
	// cout << std::setprecision(9) << i << endl;
	// cout << static_cast<int>(c) << endl;
	// cout << std::setprecision(12) << f << endl;

	// unsigned int 주의 필요
	// cout << 5u - 10u;

	// 명시적 형변환, 간단, 직접보여준다.


	// 기능상 차이는 없다.
	int i = int(4.0);		// c style
	int i = static_cat<int>(4.0); // 
	// int type instans를 넣어서 처리한다.


	

	return (0);
} 