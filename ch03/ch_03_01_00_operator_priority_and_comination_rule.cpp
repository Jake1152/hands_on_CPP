// ch_03_01_00_operator_priority_and_comination_rule.cpp

#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	// int x = + 3; // unary
	int x = std::pow(2, 3);
	// '=' assignment 연산자.
	// 오른쪽 값을 다 연산한 이후에 할당된다.
	// 그러므로 Right to Left로 진행된다.
	// 우선순위를 잘 모르겠을때는 ()를 사용하여 명확하게 표현해준다.
	cout << x << endl;

	return (0);
}

/*
	- 숫자 계산식
	- 연산자 가능
	- 함수 안쓰고 operator사용이 편리
	- 사칙연산
		e.g) x = 4 + 2 * 3;
		- 곱하기 먼저, 괄호가 있으면 괄호 먼저 한다.
	- 컴파일러는 수식을 그래프로 만들어서 처리한다.
	- x = 3 * 4 / 2;
		*, / 연산자 우선순위가 같다.
	- 같을떄 어떤걸 먼저할지
		결합법칙
	- 우선순위
	asosiciativty
	left right 
	right to left

*/
