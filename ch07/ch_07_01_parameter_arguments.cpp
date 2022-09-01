// ch_07_01_parameter_arguments.cpp

#include <iostream>

using namespace std;

int foo(int x, int y);


// 정수형변수
int foo(int x, int y)
{
	return x + y;
}

int main()
{
	int x = 1;
	int y = 2;

	foo(6, 7);	// 6,7 arguments (actual parameters)
	foo(x, y + 1); // y +1 -> 3, 3이라는 값이 전달되는 것

	return (0);
}

