#include <iostream>

using namespace std;

class Base
{
private:
    int m_value;

public:
    Base(int value)
    {

    }

    // getValue() 만들어서 접근가능 하지만 퍼포먼스 떨어질수
    // protected로 하는게 나을 수 있다.
    // 선택은 개발자의 판단
};

class   Derived: public Base
{
public:
    Derived(int value)
        : Base(value)
    {
       
    }
    
    void    setValue(int value)
    {
        Base::m_value = value;
    }
};

int main()
{
    Derived derived;

    derived.m_public = 1024;
    return (0);
}
