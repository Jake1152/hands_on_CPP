// ch_01_14_00_preprocessor.cpp

#include <iostream>

using namespace std;

// macro 바꾸면 다시 build
#define MY_NUMBER "Hola"  // 영역은 파일안에서만 적용된다.
#define MAX(a, b) ((a > b) ? a : b)  // hardware가 달라져서 요즘은 메크로를 잘 안쓴다고 하였다.

// #define LIKE_APPLE

void    doSomething()
{
    
#ifdef LIKE_APPLE
    cout << "APPLE" << endl;
#else
    cout << "Tomato" << endl;
#endif
}

int main()
{
    doSomething();
    return 0;
}

