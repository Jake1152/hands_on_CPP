#include <iostream>
#include <array>
#include "Storage8.hpp"

using namespace std;

template<typename T>
class   A
{
public:
    // example
    A(const T & input)
    // A(const T & input)
    {}

    void    doSomething()
    {
        std::cout << typeid(T).name() << std::endl;
    }

    void    test()
    {}
};

// 새롭게 클래스를 만드느것으로 볼수있다.
template<>
class   A<char>
{
public:
    A(const char & tmp)
    {}

    void    doSomething()
    {
        cout << "Char type specialization" << endl;
    }
};

// member function specialization
int main()
{
    // A<int>  a_int;A<int>  a_int;
    // A<double>  a_double;
    // A<char>  a_char;;

    // A<int>  a_int(1);
    // A<double>  a_double(3.14);
    // A<char>  a_char('a');

    // A<int>  a_int(1);
    // A<double>  a_double(3.14);
    // A<char>  a_char('a');

    // a_int.test();
    // a_double.test();
    // // a_char.test(); // 없음

    // a_int.doSomething();
    // a_double.doSomething();
    // a_char.doSomething();

    Storage8<int>   intStorage;

    for (int cnt = 0; cnt < 8; ++cnt)
        intStorage.set(cnt, cnt);

    for (int cnt = 0; cnt < 8; ++cnt)
        std::cout << intStorage.get(cnt) << '\n';
    
    cout << "Sizeof Storage8<int> " << sizeof(Storage8<int>) << endl;

    // Define a Storage8 for bool
    // Storage8<bool> boolStorage;
    // for (int cnt = 0; cnt < 8; ++cnt)
    //     std::cout << intStorage.get(cnt) << '\n';

    return (0);
}
