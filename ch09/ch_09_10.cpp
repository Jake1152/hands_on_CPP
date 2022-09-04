// ch_09_10.cpp

#include <iostream>
#include <cassert>

using namespace std;

class   Fraction
{
private:
	int m_numerator;
    int m_denominator;

public:
    // 버젼없이 되어서 더이상 못쓰게할때 등에 쓰인다.
    // 자동 형변환 막기위해서도 쓰일수이싸.
    Fraction(char) = delete;
    // explicit가 붙으면 converting constructor역할을 못하게 된다.
	explicit Fraction(int num = 0, int den = 1)
    : m_numerator(num), m_denominator(den)
    {
        assert(den != 0);
    }

    Fraction(const Fraction &fraction) // copy 생성자
        : m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
    {
        cout << " copy constructor called" << endl;
    }

    friend std::ostream & operator << (std::ostream & out, const Fraction & f)
    {
        out << f.m_numerator << " / "  << f.m_denominator << endl;
        return out;
    }
};

void doSomething(Fraction frac)
{
    cout << frac << endl;
}

int main()
{
    Fraction    frac2('c');
    Fraction    frac(7);

    doSomething(7);

	return (0);
}