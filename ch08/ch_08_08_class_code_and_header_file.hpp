// #pragma once C++11버젼에서 되는걸로 알음
#ifndef CH_08_08_CLASS_CODE_AND_HEADER_FILE_HPP
# define CH_08_08_CLASS_CODE_AND_HEADER_FILE_HPP

#include <iostream>

// unsing namespace std;
// header에서는 안쓰는게 좋다
// header file에서 쓰면 include하는 다른 소스파일에서 전부 영향받는다.
// 만약 std를 쓰는 함수가 여러개라면 번거로워 질 수 있다.

class	Calc
{
private:
	int	m_value;
public:
	Calc(int init_value)
		: m_value(init_value)
	{}

	// 자기자신의 reference를 return한다.
	// 실제 return되는것은 메모리를 가지고 있는 것이어야한다.
	// return *this
	Calc	&add(int value);
	Calc	&sub(int value);
	Calc	&mult(int value);
	void	print();
};

# endif