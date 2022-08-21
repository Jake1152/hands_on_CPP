#include <iostream>

int addTwoNumbers(int num_a, int num_b)
{
	int sum = num_a + num_b;

	return (sum);
}

int mulTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;

	return (sum);
}

using namespace std;

int main()
{

	cout << addTwoNumbers(1, 2) << endl;
	cout << addTwoNumbers(3, 4) << endl;
	cout << addTwoNumbers(8, 13) << endl;

	cout << "mul : " << mulTwoNumbers(1, 2) << endl;
	cout << "mul : " << mulTwoNumbers(3, 4) << endl;
	cout << "mul : " << mulTwoNumbers(8, 13) << endl;
	/*
		이렇게 처리하다보면
		입력을 실수할수도있고
		연산을 바꿀때 일일이 바꾸어야해서 시간소요가 된다.
		이런 경우 함수로 빼는 것이 효율적이다.
	*/


	return (0);
}