// ch_09_01_arithmetic_operator_overloading.cpp

#include <iostream>

using namespace std;

class   Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int	&getCents() { return m_cents; }

	Cents operator + ( const Cents &c2)
	{
		return Cents(this->m_cents + c2.getCents());
	}
	// friend Cents operator + (const Cents &c1, const Cents &c2)
	// {
	// 	return Cents(c1.getCents() + c2.getCents());
	// }
};

// Cents	add(const Cents &c1, const Cents &c2)
// {
// 	return Cents(c1.getCents() + c2.getCents());
// }

// Cents operator + (const Cents &c1, const Cents &c2)
// {
// 	return Cents(c1.getCents() + c2.getCents());
// }

// void	add(const Cents &c1, const Cents &c2, Cents &c_out)
// {
// 	c_out.getCents() = c1.getCents() + c2.getCents();

// }

int main()
{
	// 사칙연산은 오버로딩이 된다.
	// 연산자 오버로딩이 안되는 경우
	// ?: :: sizeof . . & 

	// # 3 -2 with friends
	// # 3 - 1 operator overloading with anonymous object
	Cents   cents1(6);
	Cents	cents2(42);
	Cents	sum;
	// 연쇄적으로 더해진다.
	cout << (cents1 + cents2 + Cents(6) + Cents(16)).getCents() << endl;


	// # 3 operator overloading
	// Cents   cents1(6);
	// Cents	cents2(42);
	// Cents	sum;

	// cout << (cents1 + cents2).getCents() << endl;

	// # 2 
	// Cents   cents1(6);
	// Cents	cents2(42);
	// Cents	sum;

	// cout << add(cents1, cents2).getCents() << endl;
	// # 1 normal
	// Cents   cents1(6);
	// Cents	cents2(42);
	// Cents	sum;

	// add(cents1, cents2, sum);
	// cout << cents1.getCents() << endl;
	// cout << cents2.getCents() << endl;
	// cout << sum.getCents() << endl;
	// cout << cents1.getCents() << endl;
	// cout << cents2.getCents() << endl;
	return (0);
}