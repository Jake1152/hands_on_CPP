// ch_03_06_logical_operators.cpp

/*
	실제로는 boolean 값만 가지고 처리한다.
	if 문 이후로는 논리연산자가 많이 나오니 경험해볼수 있다.
*/

#include <iostream>

int main()
{
	using namespace std;

	// bool    x = true;
	// bool    y = false;

	// // logical NOT
	// cout << !x << endl;

	// // logical AND, ()로 묶어줘야 연산자 우선순위 문제가 안생긴다.
	// cout << (x && y) << endl;
	
	// bool	hit = true;
	// int		health = 10;

	// if (hit == true)
	// 	if (health < 20)
	// 		cout << "die " << endl;
	// // => 축약버젼
	// if (hit && health < 20)
	// 	cout << "die " << endl;

	// bool    x = true;
	// bool    y = false;

	// cout << (x || y) << endl;

	// logical OR

	// int x = 5;
	// int y = 5;

	// if (!x == y) 
	// 	cout << " x does not equal to y" << endl;
	// else
	// 	cout << "x equals y" << endl;
	// return (0);
	// !연산자가 == 비교 연산자보다 우선순위가 높다
	// if (!x == y) => !(x) == y처럼 된다.
	// if (!x == y) 의도가 !(x == y)가 되게 묶어줘야한다.

	// int x = 5;
	// int y = 7;

	// if (x != y) 
	// 	cout << " x does not equal to y" << endl;
	// else
	// 	cout << "x equals y" << endl;
	
	// int	v = 1;
	// if (v == 0 || v == 1)
	// 	cout << "v is 0 or 1" << endl;

	/*
		if문 2개로 쪼갤 수 있다. 논리연산을 쓰는것이 더욱 간결하다.
		if (v == 0)
			cout << "v is 0 or 1" << endl;
		if (v == 1)
			cout << "v is 0 or 1" << endl;
	*/
	// OR AND
	// 주석을 잘 추가하며 괄호를 잘 표현하여 이해하기 쉽게 만든다.

	// short circuit evaluation!!
	// int	x = 2;
	// int	y = 2;

	// if (x == 1 && y++ == 2)
	// {
	// 	// do something
	// }
	// cout << y << endl;

	// bool	x = true;
	// bool	y = false;

	// // De Morgan's Law
	// !(x && y);
	// !x && !y; // 분배법칙이 적용되지 않는다.
	// // => !x || !y 이렇게 변경된다.

	// XOR
	// false false false
	// false true true
	// true false true
	// true true false 
	// !x or !y

	// if (a != b)
	// {

	// }
	
	// Logical and or 섞여있는 경우
	bool	v1 = true;
	bool	v2 = false;
	bool	v3 = false;

	bool	r1 = v1 || v2 && v3;
	bool	r2 = (v1 || v2 ) && v3;
	bool	r3 = v1 || (v2 && v3); // r1과 같다.

	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;

	return (0);
}
