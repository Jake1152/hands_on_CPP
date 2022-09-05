// ch_06_14_reference_variable.cpp

#include <iostream>

using namespace std;

// void    doSomething(int &n) // 당시부터의 추세 파라미터 값은 못바꾸게 하며 return으로 판단하다.
// {
// 	n = 10;
// 	cout << &n << endl;
// 	cout << "In doSomething " << n << endl;
// }

void    doSomething(const int &n) // const로 타입지정해서 호출된 함수쪽에서는 변경하지 못하도록 한다.
{
	// n = 10;
	cout << &n << endl;
	cout << "In doSomething " << n << endl;
}

// std vector()
void	printElements(int (&arr)[5]) // referencing array의 경우 element의 개수가 반드시 들어가야한다.
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << endl;
}

struct Something
{
	int	v1
}

int main()
{
	/*
		int value = 5;
		int *ptr = nullptr;
		ptr = &value;
	*/

	/*
		int value = 5;

		referencing은 별명처럼 쓸 수 있다.
		ref는 내부적으로 어떻게 구현되어 있는가?
		int &ref = value;

		cout << ref << endl;

		ref = 10; // *ptr = 10;

		cout << value << " " << ref << endl;
	*/

	// int value = 5;

	// int *ptr = nullptr;
	// ptr = &value;

	// int &ref = value;

	// cout << &value << endl;
	// cout << &ref << endl; // value의 주소를 공유한다.
	// cout << &(&ref)<< endl;
	// cout << ref << endl;
	// cout << ptr << endl;
	// cout << &ptr << endl;

	// int value = 5;

	// // ref는 반드시 초기화 되어야한다.
	// // lvalue가 들어가야한다!!, Rvalue X
	// int &ref = value;

	// const int y = 8;
	// // int &ref = y; // ref에서 y값을 바꿀수 있어서 ref에서 const를 그냥 ref에 넣으면 안된다.
	// const int &ref_const = y; // 이렇게 대체가능

	// cout << ref_const << endl;
	// cout << y << endl;

	// int value1 = 5;
	// int value2 = 10;

	// int &ref1 = value1;

	// cout << ref1 << endl;

	// ref1 = value2;

	// cout << ref1 << endl;

	// int n = 5;

	// cout << n << endl;

	// cout << &n << endl;
	// doSomething(n);

	// cout << n << endl;

	// const int	length = 5;
	// int			arr[length] = {1, 2, 3, 4, 5};

	// printElements(arr);

	return (0);
}

/*
- 포인터 이해하면 메모리 이해에 도움하지만 de-referencing 등 신경써야한다.
더 편리한 수단이 있다. -> referencing

*/