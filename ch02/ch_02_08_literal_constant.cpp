// ch_02_08_literal_constant.cpp

#include <iostream>

int main()
{
    using namespace std;

    float pi = 3.14f; // 실수형의 경우 f가 안붙으면 double
    // 변수 메모리 공간을 차지하고 있고 다른 값을 넣을 수 있다.
    // 3.14처럼 적어서 표현하는 것은 바꿀 수 없다. literal
    // symbolic은 변경가능
    int i = -1234u; // u를 붙이면 unsigned가 된다.
    // int i = 1234L;
    // int i = 1234LU;
    // int i = 1234LL;
    // unsigned int n = 5u;
    // long n2 = 5L;
    // double d = 6.0e100;
    // double d = 6.0e-10;
    // 8진수
    // Decimal  : 0 1 2 3 4 5 6 7 8 9 10
    // Octal    : 0 1 2 3 4 5 6 7 10 11 12 13 
    // Hexa     : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10
    // int x = 012; // 8진수
    // cout << x << endl;

    // x = 0xF; // 16진수
    // cout << x << endl;

    // int x = 0b1010; // c++14부터 적용
    int x = 0b1010'1111'1010; // c++14부터 적용 // 10진수 등등 여러가지에 쓸수있다.
    cout << x << endl;

    
    int num_items = 123;
    int price = num_items * 10; // 10 is ...
    // magic number를 코드로 남기는것은 가독성이 많이 떨어져서 안좋다.

    const int price_per_item = 10;

    int num_items = 123;
    int price = num_items * price_per_item;


    return (0);
}

