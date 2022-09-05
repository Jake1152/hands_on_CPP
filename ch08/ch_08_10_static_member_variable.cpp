// ch_08_10_static_member_variable.cpp

#include <iostream>

using namespace std;

class   Something
{
public:
    // 일반적인 const는 runtime에 값이 결정될 수도 있다.
    // template은 컴파일 time
    // static const int s_value = 1;
    // constexpr은 compile tie에 결정된다.
    static constexpr int s_value = 1;
    // constexpr을 singleton 할때 잘 쓰인다고 한다.
};

// int Something::s_value = 42; // define in CPP

int generateID()
{
    static int  s_id = 0;
    s_id++;
    return s_id;
}

int main()
{

    // # 3 static const
    Something   st1;
    Something   st2;

    cout << &st1.s_value << " " << st1.s_value << endl;
    cout << &st2.s_value << " " << st2.s_value << endl;

    // st1.s_value = 2; // const라서 변경 불가


    // static이라서 선언 전에도 메모리 공간이 있다.
    // cout << &Something::s_value << " " << Something::s_value << endl;
    // // # 2-1 static member variable
    // Something   st1;
    // Something   st2;

    // cout << &st1.s_value << " " << st1.s_value << endl;
    // cout << &st2.s_value << " " << st2.s_value << endl;

    // st1.s_value = 2;
    // cout << &st2.s_value << " " << st2.s_value << endl;


    // # 2 static member variable
    // Something   st1;
    // Something   st2;

    // st1.m_value = 2;

    // cout << &st1.m_value << " " << st1.m_value << endl;
    // cout << &st2.m_value << " " << st2.m_value << endl;


    // # 1 static variable
    // cout << generateID() << endl;
    // cout << generateID() << endl;
    // cout << generateID() << endl;

    return (0);
}