// ch_08_02_encapsulation_access_specifiers_access_function.cpp

#include <iostream>

/*
- 많은 function, class등이 정의 될것이다.
- 복잡한 것을 깔끔하게 정리 잘하는 것이 좋은 프로그래머가 되는 법일 수 있다.
- 재활용, 오픈소스를 잘 스는것
- 정리를 잘하고 연관관계를 깔끔하게 유지
- 재활용, 오픈소스 많이 사용된다.
- 복잡한것을 깔끔하게 정리를 잘하는 것

- 복잡한 것들을 깔끔하게 캡슐로 감싸는 것이 중요하다.
- capsulation할때 중요한 것
*/

using namespace std; 


class Date
{
// 아무것도 적지 않으면 private가 기본값이다.
private:	// access specifier, class안에 있는 멤버들을 밖에서 접근할수 있게 할지 안할지 결정한다.
	int m_month;
	int m_day;
	int m_year;

// public: 으로하면 되지만 프로그램이 커지거나 다른 사람과 작업한다면 다른곳에서 접근가능하니까 막아놓는게 필요하다.

// setDate는 public인데 private에 접근가능한 이유는 같은 클래스의 멤버라면 접근할 수 있다.
// access functio
public:
	void	setDate(const int &month_input, const int &day_input, const int &year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	void	setMonth(const int &month_input)
	{
		m_month = month_input;
	}

	// setDay, setYear ...
	// get이니까 못바꾸게 const로 바꾼다. 
	// getters
	const int	&getDay()
	{
		return (m_day);
	}

	// original은 private인데 다른 function에서 마음대로 접근하고 있다. 어떻게 가능한가?
	// 같은 class이지만 copy, today는 다른 메모리에 있다.(다른 instance이다.)
	// 같은 class에 선언되어 있으므로 쓸 수 있다.
	void	copyFrom(const Date &original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

int main()
{
	Date    today; // (8, 4, 2025)

	// struct 일때는 접근되었지만 class가 되는 순간 접근이 안된다., public이어야 된다.
	// private일때 어떻게 접근 가능한가?
	// today.m_month = 8;
	// today.m_day = 4;
	// today.m_year = 2025;
	today.setDate(8, 5, 2025);
	today.setMonth(10);

	Date copy;

	// copy.setDate(today.getMonth(), today.getDay(), today.getYear());
	// 이렇게하면 복잡하니까 한번에 복사할수 있는 수단을 만든다.
	// instance
	// 같은 date라는 class
	copy.copyFrom(today);
	// 수동으로 복사하는 이유 간단한 것들을 만들기 위해서이다.
	// memcpy를 쓸수도 있다.
	// copy.copyFrom();
	// 변수명을 바꾸어야하는 경우는?

	// encapsulation에서 getter setter하는 이유
	// 어떠한 이유 떄문에 변수명을 바꾸어야하는 경우
	// class밖에서도 바꿀것들이 많이 생긴다.
	// 복잡해진다.
	// refactor //  visual studio
	// 애초에 private로하고 access하게하면 class 안에서만 관리하면 처리할 수 있다.

	


	return (0);
}