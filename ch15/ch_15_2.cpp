#include <iostream>

using namespace std;

int getResult()
{
    int result;

    result = 42;
    return (result);
}

int main()
{
    int x = 5;
    int y = getResult();
    const int cx = 6;
    const int cy = getResult();

    // L value ref
    int &lr1 = x;
    int &lr2 = cx;
    int &lr3 = 5; // R-value
    // 참조하는 변수가 메모리가 있어야한다.

    const int &lr4 = x;
    const int &lr5 = cx;
    const int &lr6 = 5;

    // R-value ref
    int &&rr1 = x;
    int &&rr2 = cx;
    int &&rr3 = 5;  // move semantics에 사용됨
    // 사라질 것들이 할당

    const int &&rr4 = x;
    const int &&rr5 = cx;
    const int &&rr6 = 5;

    //rr3만이 접근 가능
    cout << rr3 << endl;
    rr3 = 10;
    cout << rr3 << endl;

    doSomething(x);
    doSomething(x);
    doSomething(x);
    doSomething(x);
    return (0);
}