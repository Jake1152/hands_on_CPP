// ch_01_08_01_operator.cpp

#include <iostream>

using namespace std;

int main()
{
    // 대입연산자, 수학에서의 같다가 아니다.
    int x = -2;
    // x is a vairable, 2 is a literal
    // 같다는 ==를 이용한다.
    int y = (x > 0) ? 1 : 2;

    
    cout << y << endl;
    //operator

    return 0;
}