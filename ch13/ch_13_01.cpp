#include <iostream>
// #In

template<typename T> // T_NAME
T   getMax(T x, T y)
{
    return (x > y) ? x : y;
}

// int getMax(int x, int y)
// {
//     return (x > y) ? x : y;
// }

// double  getMax(double x, double y)
// {
//     return (x > y) ? x : y;
// }

// float   getMax(float x, float y)
// {
//     return (x > y) ? x : y;
// }

// 오버로딩이지만 
// 반복이 많다.
// 유지보수를 빠르게 한다면?
// 자동으로 한다면 어떻게?
// template
// 프로그래머가 할 것을 컴파일러가 한다.

int main()
{
    std::cout << getMax(1, 2) << std::endl;
    std::cout << getMax(3.14, 1.5922) << std::endl;
    std::cout << getMax(1.0f, 3.4f) << std::endl;
    std::cout << getMax('a', 'c') << std::endl;

    std::cout << getMax(Cents(5). Cents(9)) << std::endl;

    return (0);
}