//

#include <iostream>


using namespace	std;

// 멤버안에 다른 user defined가 들어간 경우
class	B
{
private:
	int	m_b;

public:
	B(const int &m_b_in)
		: m_b(m_b_in)
	{}// {}블럭 내부에 아무 코드가 없더라도 {}빈 블럭이라도 필요하다.
};

class   Something
{
private:
	int		m_i = 100;
	double	m_d = 3.14;
	char	m_c = 'A';
	int		m_arr[5] = {100, 200, 300, 400, 500};
	B		m_b = { 1024 };

public:
	Something()
		: m_i(1), m_d(3.14), m_c('a'), m_arr{1, 2, 3, 4, 5 }, m_b(m_i - 1)

		/*
			- coding style 변동이 잦을때 잘 씀
			: m_i(1)
			, m_d(3.14)
			, m_c('a')
			, m_arr{1, 2, 3, 4, 5 }
			, m_b(m_i - 1)
		*/
	{
		m_i = 42;
		m_d = 3.141592;
		m_c = 'a';
	}

	void	print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
		for (auto& e:m_arr)
			cout << e << " ";
		cout << endl;
		// cout << "m_b : " << m_b << endl;
	}
};

int main() 
{
	Something	some;

	some.print();
	return (0);
}