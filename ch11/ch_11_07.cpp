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

    friend std::ostream & operator << (std::ostream & out , const Base &b)
    {
        out << "This is base output" << endl;
        return out;
    }
};

class   Derived: public Base
{
public:
    Derived(int value)
        : Base(value)
    {
       
    }
    
    // 이름을 다르게 안하는 이유는 다형성 때문에 그렇다고한다.
     void    print()
    {
        Base::print();
        cout << "I am derived " << endl;
        // print(); // 재귀 호출되어서 문제가된다.
        // 이름이 같지만 다른 함수 (상속받은 함수)
    }

    friend std::ostream & operator << (std::ostream & out , const Derived &b)
    {
        // Base::operator << 
        out << static_cast<Base>(b); // base가 된다.// derived는 base를 가지고 있다.
        out << "This is Derived output" << endl;
        return out;
    }

};

int main()
{
    Base    base(5);
    // base.print();
    cout << base;

    Derived derived(7);
    // derived.print();
    cout << derived;
    return (0);
}
