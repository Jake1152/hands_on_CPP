// ch_02_06_00_boolean.cpp

#include <iostream>

bool isEqual(int a, int b)
{
    bool result = (a == b);

    return result;
}


int main()
{
    using namespace std;

    bool    b1 = true;
    bool    b2(false);
    bool    b3{ true };
    b3 = false;

    cout << std::noboolalpha;
    // cout << !true << endl;
    // cout << !false << endl;

    // cout << !b1 << endl;
    // cout << !b2 << endl;

    // cout << (true && true) << endl;
    // cout << (true && false) << endl;
    // cout << (false && true) << endl;
    // cout << (false && true) << endl;

    // 조건에 따라 실행, bool type에 따라 결정
    // if (true)
    //     cout << "This is true" << endl;
    // else
    //     cout << "This is false" << endl;

    // if (3 > 1)
    //     cout << "This is true" << endl;
    // else
    //     cout << "This is false" << endl;

    // if (3 < 1)
    // {
    //     cout << "This is true" << endl;
    //     cout << "True second line" << endl;
    // }

    // cout << std::boolalpha;
    // cout << isEqual(1, 1) << endl;
    // cout << isEqual(0, 3) << endl;

    // 0만 아니면 True
    // if (5)
    // {
    //     cout << "True" << endl;
    // }
    // else
    //     cout << "False" << endl;
    
    bool    b;

    cin >> b;
    cout << std::boolalpha;
    cout << "Yout input : " << b << endl;
    // complier version마다 다를 수 있다.
    // 0 아니면 True로 알고 있지만 현재 환겨엥서는 다르게 나온다.
}