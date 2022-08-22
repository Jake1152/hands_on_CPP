// ch_02_09_symbolic_constants.cpp

#include <iostream>
#include "ch_02_09_symbolic_constants.hpp"

using namespace std;


// my_number는 printNumber 함수의 입력
// parameter 자체를 바꾸는 것은 잘안한다.
// 입출력을 명확하게 보여주지 못하기 떄문이다.
// void    printNumber(const int& my_number)
void    printNumber(const int my_number)
{
	int n = my_number;

	cout << n << endl;
}

#define PREICE_PER_ITEM 30

int main()
{
	// 상수는 한번 값이 정해지만 바꿀 수 없다.
	// 그러므로 초기화를 반드시 해줘야한다.
	// const double gravity{ 9.8 };
	// 특별한 경우 특별한 방식으로 강제로 바꿀 수는 있지만 그렇게하는걸 추천하지 않는다.
	// const는 고정된 숫자 표현에 사용하여 컴파일러가 막아준다.
	// 다른 프로그래머가 바꿀것을 막는다.

	// constexpr int my_const(123);
	// compile time에 결정된다.
	// const int my_const(123);
	// compile time constant
	// int number;
	// cin >> number;

	// const int special_number(number); // runtime constant

	// constexpr int	price_per_item = 30;

	// int num_item = 123;
	// int	price = num_item * 30;
	// int	price = num_item * PREICE_PER_ITEM; // macro를 쓰면 디버깅이 힘들어진다.
	// int	price = num_item * price_per_item; // macro를 쓰면 디버깅이 힘들어진다.
	// define은 적용된 범위 전체에 영향을 미친다. 그러므로 가급적 안쓰는게 좋다.
	// cout << price << endl;
	// const가 다양하게 쓸수있다.
	// 그런경우 header에 쓴다.

	double	radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi;
	cout << circumference << endl;

	return 0;
}