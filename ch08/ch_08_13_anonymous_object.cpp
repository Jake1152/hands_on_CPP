// ch_08_13_anonymous_object.cpp

#include <iostream>

class   Cents
{
private:
    int m_cents;

public:
    Cents(int cents) { m_cents = cents; }

    // member variable을 받지 않는 함수라서 const로 받았다.
    int getCents() const { return m_cents; }
};

Cents   add(const Cents &c1, const Cents &c2)
{
    return Cents( c1.getCents() + c2.getCents() );
}

int main()
{
    using namespace std;

    cout << add(Cents(6), Cents(8)).getCents() << endl;
    cout << int(6) + int(8) << endl;
    return (0);
}