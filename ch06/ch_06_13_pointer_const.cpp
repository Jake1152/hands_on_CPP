// ch_06_13_pointer_const.cpp

#include <iostream>

using namespace std;

int main()
{
	// const int   value = 5;
	// const int   *ptr = &value; // 포인터를 통해서 변수르 읽을 수 있다.
	// *ptr = 6; // dereferencing해서 값을 변경하는 것은 안된다. const int이기에!

	// cout << *ptr << endl;

	// int value = 5;
	// const int   *ptr = &value;
	// // ptr이 가리키는 곳이 const int이므
	// // 가리키는 곳에 값은 바꾸지 않겠다는 의미, 다른 곳을 가리키는것은 가능!
	// // *ptr을 통해서 dereferencing으로 값을 변경할 수 없다.
	// // value에서는 값을 바꿀 수 있다.
	
	// int value2 = 6;
	// ptr = &value2;

	int			value = 5;
	int *const	ptr = *value;

	*ptr = 10;
	cout << *ptr << endl;

	int value2 = 8;
	ptr = &value2;

	cout << *a << endl;

	return (0);
}