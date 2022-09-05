//ch_08_08_destructor.cpp

#include <iostream>

using namespace std;


class IntArray
{
private:
	int	*m_arr = nullptr;
	int	m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];

		cout << "Constructor " << endl;
	}

	// ~IntArray()
	// {
	// 	// delete[] m_arr;
	// 	// 보다 조심스럽게 처리하는 법
	// 	if (m_arr != nullptr)
	// 		delete[] m_arr;
	// 	cout << "Destructor " << endl;
	// }

	int	getLength() { return m_length; }
};

class Simple
{
private:
	int m_id;

public:
	Simple(const int &id_in)
		: m_id(id_in)
	{
		cout << "Constructor " << m_id << endl;
	}

	// destructor는 파라미터가 없다.
	~Simple()
	{
		cout << "Destructor " << m_id << endl;
	}
};

int main()
{
	// # 3 cpp에서 가장 많이 쓰이는 것 => delete
	while (true)
	{
		IntArray	my_int_arr(10000);
		// delete [] my_int_arr.m_arr; // 프로그래머 입장에서 계속 신경써야해서 실수할수있다.
		// 이런 경우 소멸자를 쓰면 깔끔하게 처리할 수 있다.
	}

	// # 2 dynamic allocation version
	// Simple *s1 = new Simple(0);
	// Simple s2(1);

	// delete s1;

	// # 1 normal
	// Simple s1(0);
	// Simple s2(1);


	return (0);
}