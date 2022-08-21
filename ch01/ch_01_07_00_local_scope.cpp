// ch_01_07_00_local_scope.cpp

#include <iostream>

using namespace std;

int main()
{
    int x = 0;

    cout << x << " " << &x << endl;    
    // 이렇게 블럭을 추가해서 영역을 분리가능하다.
    {
        // int x = 1;
         cout << x << " " << &x << endl;    
    }
    // 위아래 블럭의 int x는 서로 다른 변수이다.
    {
        int x = 2;
         cout << x << " " << &x << endl;    
    }
    return (0);
}

/*
    중괄호 내부가 영역
*/