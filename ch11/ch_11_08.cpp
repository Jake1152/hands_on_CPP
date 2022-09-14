#include <iostream>

using namespace std;

class Base
{
protected:
    int m_i;

public:
    Base(int value)
        : m_i(value)
    {

    }

    void    print()
    {
        cout << "I am base" << endl;
    }

};

class   Derived: public Base
{
public:
    Derived(int value)
        : Base(value)
    {
       
    }
    
    using Base::m_i; // 상속받은 것을 바꿈
private:
    using Base::print; // do not add()
    //
};

int main()
{
    Base base(5);
    // base.print();    

    Derived derived(7);
    
    derived.m_i = 1024;
    derived.print();
    return (0);
}
