#include <iostream>

using namespace std;

class Base
{
public:
    int m_public;
protected:
    int m_protected;
private:
    int m_private;
};

// class   Derived: public Base
// class   Derived: protected Base
class   Derived: private Base
{
public:
    Derived()
    {
        Base::m_public = 123; // this->m_public; m_public; 과 같다.
        Base::m_protected = 123;
        Base::m_private;
        // Base::m_private; // error protected에서 private접근 불가
        // m_private = 123; // error,  자식에서도 접근 불가
    }
};

class   GrandChild: public Derived
{
public:
    GrandChild()
    {
        Derived::m_public = 123; //  Derived가 private accessfier라서 그러하다
        
    }
};


int main()
{
    // # 2
    Derived derived;

    derived.m_public = 1024;
    // derived.m_protected; error
    // derived.m_private;

    // # 1
    // Base    base;

    // base.m_public = 123; // 
    // base.m_private = 123; // 접근 불가 private라서
    return (0);
}
