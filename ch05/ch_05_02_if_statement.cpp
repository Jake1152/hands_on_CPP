// ch_05_02_if_statement.cpp

#include <iostream>

int	min(int x, int y)
{
	if (x > y) return y;
	else		return x;
	return (x > y) ? y : x;
}

int	min(int x, int y)
{
	if (x > y)
		return y;
	else
		return x;
}


int main()
{
	using namespace std;

	// int x;
	// // cin >> x;

	// // // if (x >= 10)
	// // // {
	// // // 	if (x <= 20)
	// // // 		cout << x << " is between 10 and 20" << endl;
	// // // 	else
	// // // 		cout << x << " is greater than 20" << endl;
	// // // }
	// // // else
	// // // 	cout << x << " is less than 10" << endl;

	// if (x > 10)
	// {
	//     cout << x << " is greater than 10  " << endl;
	//     cout << "Test 42" << endl;
	// }
	// else
	//     cout << x << " is not greater than 10" << endl;
	//     cout << "Test 42" << endl;

	// if (1) // 0 이 아니면 True, 1이면 항상 실행
	//     int x = 5;
	// else
	//     int x = 6;

	// if (1) // 0 이 아니면 True, 1이면 항상 실행
	// {
	//     int x = 5;
	// }
	// else
	// {
	//     int x = 6;
	// }
	// cout << x << endl;
	
	// int	x;
	// int y;

	// cin >> x >> y;

	// if (x > 0 && y > 0)
	// 	cout << "Both numbers are positive" << endl;
	// else if (x > 0 || y > 0)
	// 	cout << "One if the numbers is positive" << endl;
	// else
	// 	cout << "Neither number is positive" << endl;

	// int x;
	// cin >> x;

	// if (x > 10)
	// 	cout << "A" << endl;
	// else if (x == -1)
	// 	return (0); // exit(0);
	// else if (x < 0)
	// 	cout << "B " << endl;
	// cout << "Hello " << endl;

	int	x;
	cin >> x;

	if ( x > 10) // ; 
	{
		x = 1;
	}

	// 실수로 조건문 끝에 ;넣으면 문장 끝으로 인식해서 if문대로 실행되지 않고 밑에 블럭을 일반 명령코드로 인식되어 if조건과 상관없이 실행된다.
	if ( x > 10); 

	{
		x = 1;
	}


	// 아무것도 안하는 null statement도 쓸때가 있다. 그런경우 주석으로 왜 그런지 설명한다ㅏ.
	if (x > 10)
		; // ...

	// 아래처럼 적으면 대입만 되기에 
	// x = 0; if (x)
	// x는 0이라서 false이다.
	// if 밑에 블럭은 실행되지 안흔ㄴ다.
	// cpp에서는 개발자가 의도해서 한것으로 생각해서 별도 처리가 없다.
	// 개발자가 신경써야한다.
	if (x = 0) // if (x == 0)
		cout << x << endl;
	cout << x << endl;

	return (0);
}
