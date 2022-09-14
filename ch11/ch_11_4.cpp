// ch_11_4.cpp
#include <iostream>

using namespace std;

class   Mother
{
// public:
private: // private으로 바꾸어도 정상동작할것으로 예상 
    int m_i;

    // Mother() default 생성자없이 , 
    Mother(const int & i_in = 0)
        : m_i(i_in)
    {
        cout << "Mother contstruction " << endl;
    }
};

class Child : public Mother
{
public:
    double  m_d;
    int     m_temp;

public:
    Child()
        : m_d(1.0f), Mother(1024) // Mother()가 숨어있다. 기본적으로 된다
    {
        cout << "Child construction" << endl;
    }
};

int main()
{
    Child   ch1;

    cout << sizeof(Mother) << endl;
    cout << sizeof(Child) << endl;

    return 0;
}