// ch_08_11_static_member_function.cpp

#include <iostream>

using namespace std;

class   Something
{
// public:
// 	static int s_value;
private:
	static int	s_value;
	int			m_value;

public:
	// int getValue()
	// static의 경우 this를 쓸 수 없다.
	static int getValue()
	{
		// return this->s_value;
		return s_value;
	}

	// static이 아니다.
	// this 사용
	// 특정 instance 주소를 가져다가 사용하겠다는 의미
	int	temp()
	{
		return this->s_value;
		// return this->s_value + this->m_value;
	}
};

int	Something::s_value = 42;

int main()
{
	// # 2-1 member function pointer
	cout << Something::getValue() << endl;

	// 변수의 주소는 다르다.
	// 함수는 같은 함수면 1개이다 여러개가 복제되지 않는다.
	// 어딘가에 함수가 저장되어있고 그곳을 가리키는 것과 같다.
	Something	s1, s2;
	cout << s1.getValue() << endl;

	int	(Something::*fptr1)() = &Something::temp;

	cout << (s2.*fptr1)() << endl;

	// # 2 static function
	// cout << Something::getValue() << endl;

	// Something	s1;
	// cout << s1.getValue() << endl;
	// cout << s1.temp() << endl;
	// cout << s1.s_value << endl;

	// # 1 normal
	// cout << Something::s_value << endl;

	// Something	s1;
	// cout << s1.getValue() << endl;
	// cout << s1.s_value << endl;

	return (0);
}