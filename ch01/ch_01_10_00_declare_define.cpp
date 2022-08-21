// ch_01_10_00_declare_define.cpp

#include <iostream>

using namespace std;

// declare
int add(int a, int b); // forward declaration
int multiply(int a, int b);
int subtract(int a, int b);

int main()
{
    // 위에 add()가 없어서 찾지 못한다.
    // complier는 위에서부터 읽는다.
    cout << add(1, 2) << endl;
    cout << subtract(1, 2) << endl;
    cout << multiply(1, 2) << endl;
    return (0);
}


// definition
static int add(int a, int b)
{
    return a + b;
}

// definition
int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}
