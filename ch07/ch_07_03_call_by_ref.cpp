// ch_07_03_call_by_ref.cpp
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// degrees이외에 &로 선언한 변수들은 변경된다.
// void    getSinCos(double degrees, double &sin_out, double &cos_out)
void    getSinCos(const double degrees, double &sin_out, double &cos_out)
{
	static const double pi = 3.141592; // static 재사용
	double              radians = degrees * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}


void addOne(int &x)
{
	cout << "In addOne " << x << " " << &x << endl;
	x = x + 1;
}

// void    foo(const int &x)
// {
//     cout << x << endl;
// }

typedef int *pint;

// void    foo(int *&ptr)
void    foo(pint &ptr)
{
	cout << ptr << " " << &ptr << endl;
}

// void	printElement(int (&arr)[4])
void	printElement(vector<int> &arr)
{
	
}


int main()
{
	// *int arr[]{1,2,3,4};
	// vector
	vector<int> arr{ 1, 2, 3, 4};

	printElement(arr);

	// # 3
	// int x = 5;
	// pint ptr = &x;

	// cout << ptr << " " << &ptr << endl;
	// foo(ptr);

	

	// foo(6); // 받는곳이 ref라서 리터럴한 값은 못넘긴다.

	// double  sin(0.0);
	// double  cos(0.0);

	// getSinCos(30.0, sin, cos);

	// cout << sin << " " << cos << endl;


	// int x = 6;
	// cout << "In main " << x << " " << &x << endl;

	// addOne(x);

	// cout << "In main " << x << " " << &x << endl;

	// doSomething(x);
	// doSomething(x + 1);

	return (0);
}

