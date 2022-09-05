// ch_08_07_this_pointer_and_chaining_member_function.cpp

#include <iostream>

using namespace std;


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
	Calc	&add(int value) { m_value += value; return *this; }
	Calc	&sub(int value) { m_value -= value; return *this; }
	Calc	&mult(int value) { m_value *= value; return *this; }

	// void	add(int value) { m_value += value; }
	// void	sub(int value) { m_value -= value; }
	// void	mult(int value) { m_value *= value; }

	void	print()
	{
		cout << m_value << endl;
	}
};
/*

class   Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		// 현재 주소를 가지고 있는 instance에서 setID()라는 함수를 사용한다는 의미
		// this->setID(id);
		// // 현재 주소를 가지고 있는 instance의 m_id에 접근 보통 this->를 가려놓는다.
		// this->m_id;
		// 아래처럼 this->를 생략한다. 고급프로그래밍 기법을 쓸때 this-> 포인터를 강제로 쓸수도 있다.
		setID(id);
		m_id;
		// setID()함수는 모든 instance가 공유해서 사용하는 것이다.
		// 내부적으로 어떻게 구분하는가?
		// this->setID(id); 이렇게 사용한다.
		// setID(id)에는 this->가 숨어있는 것이다.
		// (*this).으로도 표현가능
		// python에서는 self사용
		cout << this << endl;
	}

	void    setID(int id) { m_id = id; }
	int     getID(int id) { return m_id; }
};
*/

int main()
{
	// # 2-3 shortest
	Calc(10).add(10).sub(1).mult(2).print();
	// # 2-2 chaning function
	// 쪼갠 버젼
	// Calc	cal(10);
	// Calc	&tmp1 = cal.add(10);
	// Calc	&tmp2 = tmp1.sub(1);
	// Calc	&tmp3 = tmp2.mult(2);
	// tmp3.print();

	// # 2-1 chaning function
	// Calc	cal(10);
	// cal.add(10).sub(1).mult(2);
	// cal.print();
	


	// # 2 chaning function
	// Calc	cal(10);
	
	// cal.print();
	// cal.add(10);
	
	// cal.sub(1);
	// cal.print();

	// cal.mult(2);
	// cal.print();

	// # 1 this
	// Simple s1(1);
	// Simple s2(2);

	// s1.setID(2);
	// s1.setID(4);

	// cout << &s1 << " " << &s2 << endl;
	// simple의 setID가 어딘가에 저장되어있다.
	// 문법상으로 이렇게 쓸수는 없지만 개념적으로 그러하다.
	// 이유는 매번 복사해주는것은 비효율적이므로 어딘가에 저장된 멤버함수를 가리킨다.
	// Simple::setID(&s1, 1);
	// Simple::setID(&s2, 4); 마찬가지
	// Simple::setID(&s2, 4); == s2.setID(4);
	return (0);
}