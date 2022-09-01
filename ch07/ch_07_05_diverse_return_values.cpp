// ch_07_05_diverse_return_values.cpp
#include <iostream>
#include <array>
#include <tuple>

using namespace std;


// int getValue(int x)
// {
//     int value = x * 2;
//     return value;
// }

// new delete가 나뉘니까 헷갈릴 수 있다.
// return by addr
// int *alloacMemory(int size)
// {
//     return new int[size];
// }

// return by ref
// int &getValue(int x)
// {
//     int value = x * 2;
//     return value;
// }

// struct S
// {
//     int a,b,c,d;
// };

// S   getStruct()
// {
//     S   my_s {1,2,3,4};
// }

std::tuple<int, double> getTuple()
{
    int a = 10;
    double d =3.14;
    return (std::make_tuple(a,d));
}

int main()
{
    // #4 C++17
    auto[a, d] = getTuple();
    cout << a << endl; // a
    cout << d << endl; // d

    // # 3 
    // std::tuple<int, double> my_tp = getTuple();
    // cout << std::get<0>(my_tp) << endl; // a
    // cout << std::get<1>(my_tp) << endl; // d



    // # 2
    // std::array<int, 100> my_array;
    // my_array[30] = 10;

    // get(my_array, 30) = 1024;

    // cout << my_array[30] << endl;

    // get(my_array, 30) *= 10;

    // cout << my_array[30] << endl;

    // cout << value << endl;
    // cout << value << endl;

	return (0);
}


