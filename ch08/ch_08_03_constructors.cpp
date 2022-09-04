// ch_08_03_constructors.cpp

#include <iostream>

using namespace std;

/*
- 객체를 생성하다보면 이러한것들을 가져야해 라고 하는 경우가 있다.
    그럴 떄 생성자를 쓴다.
*/

class   Second
{
public:
    Second()
    {
        cout << "class Second constructor()" << endl;
    }
};

// class 안에 class, second 타입의 멤버가 있다.
class   First
{
    Second  sec;

// 생성자를 private로하면 밖에서 쓸수없다 그런데 이 성질을 이용해서 쓰는 방법도 있다.
private:
    First()
    {
        cout << "class First constructor()" << endl;
    }
};

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
	// 생성자가 instance를 만드는 것이 아니다
	// 생성자가 없으면 instance 생성이 안된다.
	// 그래서 없으면 default 생성자가 생긴다.
	// constructor가 생성하는 것이 아니라 construnction될때 생성자를 호출한다.
	// 파라미터가 몇개 있든지 1개만이라도 정의하면 default 생성자가 생성되지 않는다.

    // Fraction(), 생성자도 함수라서 parameter를 넣을 수 있다.
	// instance가 생성될때 생성자에 정의한 내용들이 실행된다.
	// Fraction(const int &num_in, const int &den_in)
    Fraction() // 기본생성자
    {
        m_numerator = 1;
        m_denominator = 2;
	}

	Fraction(const int &num_in=42, const int &den_in = 1)
    {
        m_numerator = num_in;
        m_denominator = den_in;
	}

	// 	cout << "Fraction() constructor" << endl;
    // }

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
	// Fraction frac;
	// Fraction	frac_with_arg(42, 5); 
    // Fraction frac;// frac() 생성자도 함수, 생성자의 인자가 하나도 없으면 ()를 뺀다.
	// Fraction	frac_with_arg(42, 5);
	// frac.print();

    // Fraction frac{ 0, 1}; // int i {0};
    // frac.m_numerator = 0;
    // frac.m_denominator = 1;
    // frac.print();
	// frac_with_arg.print();


    // # copy initialization 쓰는 경우
    // member들이 public일때는 생성자 없이 처리할 수 있다.
    // assignment를 operator overloading하지 않으면 자동으로 복사된다.
    // operator overloading하는 방법은 추후에 설명

    // uniform initailization
    // member들이 public일때는 uniform init으로 가능
    // private일때는 uniform init으로 안된다.
    // uniform initialization은 타입변환을 지원하지 않는다.
    // Fraction    frac_with_args = Fraction{ 1, 3 };
    // Fraction    frac_with_args = Fraction(1, 3);

    // frac_with_args.print();
    First   fir;

    return (0);
}
