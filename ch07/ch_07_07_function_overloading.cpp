// ch_07_07_function_overloading.cpp

#include <iostream>
#include <string>

using namespace std;

// int add(int x, int y)
// // int add(double x, double y)
// {
//     return x + y;
// }

// double add(double x, double y)
// {
//     return x + y;
// }

// 반환값만 다른경우 어떻게 다르게 컴파일러에 인식되게할것인가?
// 혹은 다른방식으로 다른 값을 받을것인가?
// int getRandom() {}
// double getRandom() {}

// int getRandom(int x) {}
// double getRandom(double x) {}
// // ref, 이름은 get이라서 헷갈릴수
// int getRandom(int &x) {}
// void getRandom(double &x) {}

// typedef int my_int;
// // typedef해도 컴파일러에게는 같은 함수가 2개 있는 꼴이다.
// void    print(int x) {}
// void    print(my_int x) {}

// void    print(char *value) {}
// void    print(int value) {}

void    print(unsigned int value) {}
void    print(float value) {}

int main()
{
    print((unsigned int)'a');
    print(0);
    print(3.141592);
    // print(0);   // int value
    // print('a'); // int value
    // print("a"); // char *value
    return (0);
}
