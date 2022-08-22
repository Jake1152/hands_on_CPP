// ch_02_05_00_floating_point_numbers.cpp
#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
	using namespace std;

	// float		f;
	// double		d;
	// long double	ld;

	
	// cout << sizeof(float) << endl;
	// cout << sizeof(double) << endl;
	// cout << sizeof(long double) << endl;
	// cout << numeric_limits<float>::max() << endl;
	// cout << numeric_limits<double>::max() << endl;
	// cout << numeric_limits<long double>::max() << endl;

	// cout << numeric_limits<float>::min() << endl;
	// cout << numeric_limits<double>::min() << endl;
	// cout << numeric_limits<long double>::min() << endl;

	// cout << numeric_limits<float>::lowest() << endl;
	// cout << numeric_limits<double>::lowest() << endl;
	// cout << numeric_limits<long double>::lowest() << endl;

	// 컴퓨터 입장에서 doulbe float 사용하는 메모리 차이가 두 배이다.
	// float f(3.141592f); // 3.14 = 31.4 * 0.1
	// double d;
	// long double ld;

	// cout << 3.14 << endl;
	// cout << 31.4e-1 << endl;
	// cout << 31.4e-2 << endl;
	// cout << 31.4e1 << endl;
	// cout << 31.4e2 << endl;

	// float	f(123456789.0f); // 10 siginificant digits
	// double	d1(1.0);
	// double	d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	// cout << std::setprecision(17) << endl;

	// cout << d1 << endl;
	// cout << d2 << endl;

	double	zero = 0.0;
	double	posinf = 5.0 / zero;
	double	neginf = -5.0 / zero;
	double	nan = zero / zero;

	// isnan() #include <cmath> 필요
	cout << posinf << " " << std::isnan(posinf) << endl;
	cout << neginf << " " << std::isnan(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;

	return (0);
}
