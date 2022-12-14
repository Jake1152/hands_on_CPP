// ch_09_05_incre_decrement_operator.cpp

#include <iostream>

using namespace std;

class   Digit
{
private:
	int m_digit;

public:
    Digit(int digit = 0) : m_digit(digit) {}

    // prefix
    Digit &operator ++ ()
    {
        ++m_digit;
        return *this;
    }

    // postfix ,  이미 선언한 다른 증감연산자와 구분하기 위해 dummy로 파라미터 타입을 준다.
    Digit &operator ++ (int)
    {
        m_digit++;
        return *this;
    }

    friend ostream & operator << (ostream &out, const Digit &d)
    {
        out << d.m_digit;
        return out;
    }
};

int main()
{
    Digit d(5);

    cout << ++d << endl;
    cout << d << endl;

    cout << d++ << endl;
    cout << d << endl;

	return (0);
}