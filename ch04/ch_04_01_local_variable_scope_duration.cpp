// ch_04_01_local_variable_scope_duration.cpp

#include <iostream>

using namespace std;

namespace	workspace1
{
	int     a = 1;
	void	doSomething()
	{
		a += 3;
		cout << a << endl;
	}
}

// 함수이름 반환값 파리미터, 다 같다면 따로 선언 및 정의해서 쓸 수없다.
// 그런경우 영역을 분리한다. (namespace이용)
namespace	workspace2
{
	int		a = 1;
	void	doSomething()
	{
		a += 5;
		cout << a << endl;
	}
}

int main()
{
	// using namespace workspace1;
	using namespace workspace2;
	// apple = 1; // 선언전에 초기화는 불가하다.
	// scope를 의미한다.

	// int apple = 5;
	// {
	// 	int apple = 1;
	// 	cout << apple << endl;
	// }
	// cout << apple << endl;
	// doSomething();

	// :: -> 영역 범위 결정 연산자
	// scope resolution operator
	workspace1::a;
	cout << "workspace1::a " << a << endl;
	workspace1::doSomething();

	workspace2::a;
	cout << "workspace2::a " << a << endl;
	workspace2::doSomething();
	// namespace안에 namespace를 넣을 수 있다.
	return (0);
}

// apple =42; // 역시 범위 밖