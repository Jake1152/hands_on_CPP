// ch_07_09_func_pointer.cpp

#include <iostream>
#include <array>
#include <functional>
using namespace std;

// 함수도 주소만 가지고 처리할수있다.
int func()
{
    return 5;
}

int goo()
{
    return (10);
}

bool    isEven(const int &number)
{
    if (number % 2 == 0)
        return true;
    return false;
}

bool    isOdd(const int &number)
{
    if (number % 2 == 1)
        return true;
    return false;
}

typedef bool(*check_fcn_t)(const int&);

void    printNumber(const array<int, 10> &my_array, check_fcn_t check_fcn = isEven)
{
    for (auto element : my_array)
    {
        if (check_fcn(element) == true) cout << element;
    }
    cout << endl;
}


int main()
{
    std::array<int, 10>my_array{0,1,2,3,4,5,6,7,8,9};

    std::function<bool(const int &)> fcnptr = isEven;
    
    printNumber(my_array, fcnptr);
    // printNumber(my_array, isEven);
    // #1
    // func();

    // int(*fcnptr)() = func; //

    // cout << fcnptr() << endl;

    // fcnptr = goo;

    // cout << fcnptr() << endl;

    return (0);
}


