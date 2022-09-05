// ch_08_03_constructors.cpp

#include <iostream>

using namespace std;

/*
- 객체를 생성하다보면 이러한것들을 가져야해 라고 하는 경우가 있다.
    그럴 떄 생성자를 쓴다.
*/


/*
- 분수
    - numerator 분자
    - denominator 분모
*/
class Fraction
{
// public:
private:
    int m_numerator;    // 분자
    int m_denominator;  // 분모


// default setting
// private:
//     int m_numerator = 0;    // 분자
//     int m_denominator = 1;  // 분모

// 생성자, class이름과 동일하면 생성자이다. 반환값, parameter가 없다. 
public:
    // Fraction()
    Fraction(const int &num_in, const int &den_in)
    {
        m_numerator = num_in;
        m_denominator = den_in;
    }

    //  생성자가 없을떄는 default 생성자가 있다.
    // compiler가 생성자가 없으면  default를 만들어준다.
    // 그래야 instance를 만들 수 잇따.

public:
    void    print()
    {
        cout << m_numerator << " / " << m_denominator << endl;
    }
};

int main()
{
    Fraction frac;// frac() 생성자도 함수, 생성자의 인자가 하나도 없으면 ()를 뺀다.
    // Fraction frac{ 0, 1}; // int i {0};
    // frac.m_numerator = 0;
    // frac.m_denominator = 1;

    frac.print();
}
