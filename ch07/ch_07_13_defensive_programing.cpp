// ch_07_13_defensive_programing.cpp

#include <iostream>

using namespace std;

int main()
{
	// int x;

	// cin >> x;

	// if (x > 5)
	// 	cout << "x is greater than 5" << endl;

	/*
		#syntax error
		int x
		compiler 의존적 프로그래밍도 나쁘지 않다.
		문법에러는 어느정도 숙련되면 고민하지 않는다.

	*/

   // sematic erros

	// int x;

	// cin >> x;
	// if (x >= 5) // 실수로 =을 넣었기에 5일떄도 출력된다.
	// 	cout << "x is greater than 5" << endl;

	// violated assumption
	// - 사용자가 가정과는 다르게 프로그래밍한다.

	string hello = "hello, my name is Jake";

	// depensive code
	cout << "Input from 0 to " << hello.size() - 1 << endl;

	int ix;
	while (true)
	{
		cin >> ix;
		if (ix < hello.size())
			break ;
		cin.clear();
		cout << "please input under " << hello.size() << endl;
	}
	cout << hello[ix] << endl;
	return (0);
}
