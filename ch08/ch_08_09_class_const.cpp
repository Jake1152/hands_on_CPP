// ch_08_09_class_const.cpp
#include <iostream>
#include <string>

using namespace std;

class   Something
{

public:
    string  m_value = "default";

    // public이라면 함수 밖에서 바꿀 수 있다 그런것인지 테스트
    const string &getValue() const
    {
        cout << "const version " << m_value << endl;
        return m_value;
    }

    string &getValue()
    {
        cout << "non-const " <<  m_value << endl;
        return m_value;
    }

};

/*
class   Something
{
public:
    int m_value = 42;

    // default copy constructor가 숨어 있다.
    // 사용자가 수동으로 만들어줄 수도 있다.
    Something(const Something &st_in)
    {
        m_value = st_in.m_value;
        cout << "Copy Constructor " << endl;
    }
  
    Something()
    {
        cout << "Constructor " << endl;
    }

    void    setValue(int value)
    {
        m_value = value;
    }

    // 복잡한 함수를 만들떄 const를 넣을 수 있는 것은 다 넣는다.
    // 실수를 줄일 수 있으며 디버깅을 빠르게 할 수 있다.
    int     getValue() const
    {
        return m_value;
    }

};
*/

// void    print(Something st)
void    print(const Something &st)
{
    cout << &st << endl;
    cout << st.getValue() << endl;
}

int main()
{
    // # 3 const
    Something   something;
    something.getValue() = "test";
    something.getValue();

    const Something something2;
    // something2.getValue() = "test to const";
    something2.getValue();



    // # 2 print
    // Something something;

    // cout << &something << endl;

    // print(something);

    // # 1 normal
    // const   Something something;
    // something.setValue(3);
    // const라서 setvalue()를 쓸 수 없다., 문맥적으로도 잘못됨

    // complier가 판단할때는 멤버변수가 바뀌었는지가 아니라 member function이 const인지 아닌지를 판단한다.
    // cout << something.getValue() << endl;
    return (0);
}