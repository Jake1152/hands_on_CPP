// ch_11_3.cpp
#include <iostream>

using namespace std;

class   Mother
{
// private:
public:
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

public:
    // default constructor와 비슷
    // 없으면 자동으로 만들어준다
    // 파라미터가 있는 생성자를 구현했다면
    // 디폴트 생성자를 수동으로 프로그래머가 구현해주어야한다.
    Child()
        // : m_i(1024) // error
        // : m_d(1.0)
        : Mother(), m_d(1.0) // Mother()가 숨어있다. 기본적으ㅗㄹㄱ된다
    {
        cout << "Child construction" << endl;
        // this->m_i = 10;
        // this->Mother::m_i = 10;
    }
};

int main()
{
    Child   ch1;

    return 0;
}