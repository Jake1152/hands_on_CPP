// ch_07_08_parameter_default.cpp

#include <iostream>
using namespace std;


// 끝에서부터 기본값이 있어야만 가능하다., 중간에만 있거나 앞에만 있으면 안된다.
// void print(int x=1, int y, int z)
// // void print(int x, int y, int z)
// // void print(int x = 1024)
// {
//     cout << x << endl;
//     cout << y << endl;
//     cout << z << endl;
// }

void    print(int x) {}
void    print(int x, int y=42) {}

int main()
{
    print(10);

    return (0);
}


