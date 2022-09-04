// ch_09_06.cpp
#include <iostream>
#include <cassert>

using namespace std;

class   IntList
{

//동적할당 사용가능
private:
	int m_list[10] = { 1,2,3,4,5,6,7,8,9,10};

public:
	void    setItem(int idx, int val)
	{
		m_list[idx] = val;
	}

	int	   getItem(int idx)
	{
		return m_list[idx];
	}

	int	* getList()
	{
		return m_list;
	}

	// int말고 여러 타입 가능
	int	& operator [] (const int idx)
	{
		assert(idx >= 0);
		assert(idx < 10);
		return m_list[idx];
	}

	const int	& operator [] (const int idx) const
	{
		assert(idx >= 0);
		assert(idx < 10);
		return m_list[idx];
	}

	// friend ostream & operator << (ostream &out, const Digit &d)
	// {
	// 	out << d.m_digit;
	// 	return out;
	// }
};

int main()
{

	IntList *list = new IntList;

	list[3] = IntList; // list array라서 문제
	(*list)[3] = 10;



	// # 2
	// IntList my_list;

	// int	& operator [] (const int idx)로 가능해짐
	// my_list[3] = 10;
	// cout << my_list[3] << endl;

	// # 1
	// IntList my_list;
	// my_list.setItem(3, 1);
	// cout << my_list.getItem(3) << endl;
	// my_list.getList()[3] = 10;
	// cout << my_list.getList()[3] << endl;

	return (0);
}
