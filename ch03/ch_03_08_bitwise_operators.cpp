// ch_03_08_bitwise_operators.cpp

/*
    - 비트단위 연산
        - 비트단위로 연산한다.
    - 이전에는 타입단위 연산자를 배웠다.
        - 비트단위 각 자리에 대해서 연산한다.
        - 왜 필요한가?
            bool 0,1 단위
        - 그런데 집의 주소를 줄수 있는건 집 단위
            컴퓨터에서는 byte단위
            bool 0,1만 쓰는데 나머지 7비트는 낭비된다.
            그런 낭비를 막을 수 있게 비트단위 연산이 제공되며
            비트연산은 속도가 빠르다.
    - 쭉 봐두면 편하다.
    - 부담없이 보면 좋다.
    - 손으로 한번씩 따라한다.
    - 비트단위 연산자
    // << left shift
    // >> right shift
    // cout cin 다른 의미라고 이미 재정의 되어있다. 오버로딩 오버라이딩
            
*/
#include <iostream>
#include <bitset> // 최근에 들어왔다고함

int main()
{
    using namespace std;

    // << left shift
    // >> right shift
    // cin, cout은 다른 의미로 쓴다고 operator overloading으로 처리하였다.
    // cin, cout은 bitwise연산이 아니다.
    // ~, &, |, ^(XOR) bitwise에서는 XOR연산자가 있다.
    // 1. shift operator
    // signed는 맨앞에가 부호를 의미하므로 그런부분 신경 안쓸수 있게 unsinged를 사용한다.
    // unsigned int a = 3;

    // cout << std::bitset<4>(a) << endl;

    // // 자릿수만큼 이동시킨다.
    // unsigned int b = a << 3;
    // cout  << std::bitset<4>(b) << " " << b << endl;

    // unsigned int a = 1024;

    // cout << std::bitset<16>(a) << endl;

    // cout  << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
    // cout  << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
    // cout  << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
    // cout  << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;
    // 2의 배수로 표현된다. 2의 제곱
    // 2의 몇제곱
    // unsigned int가 있을때 pow를 쓰는 것보다 shift연산을 하는 것이 훨씬 빠르다.
    // 곱하기보다 shift operator가 빠르다.
    // 2의 n제곱과 관련된 값을 쓴다. 이유는 컴퓨터는 2진수를 쓰니까 더욱 빠르게 할 수 있으니까 그렇다.
    // binary트리 쓰는 것도 그런 맥락으로 볼 수 있다.

    // unsigned int a = 1024;

    // cout << std::bitset<16>(a) << endl;
    // cout << std::bitset<16>(~a) << " " << (~a) << endl;
    // !a logical NOT
    // ~a bitwise NOT

    // AND OR XOR
    unsigned int a = 0b1100;
    unsigned int b = 0b0110;

    cout << std::bitset<4>(a & b) << endl; // bitwise AND
    cout << std::bitset<4>(a | b) << endl; // bitwise OR
    cout << std::bitset<4>(a ^ b) << endl; // bitwise XOR

    a &= b;
    // assignment operator와 연계해서 쓸 수 있다.
    return (0);
}