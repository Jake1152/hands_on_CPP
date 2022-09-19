#include <iostream>
#include "Storage.hpp"

using namespace std;

template<typename T>
T   getMax(T x, T y)
{
    return (x > y) ? x : y;
}

template<>
char    getMax(char x, char y)
{
    cout << "Warning : comparsing chars" << endl;

    return (x > y)? x : y;

}
// member function specialization
int main()
{
    // cout << getMax('1', '2') << endl;
    // cout << getMax(1, 2) << endl;
    // cout << getMax<double>(1, 2) << endl;
    // cout << getMax(1.0, 2.0) << endl;

    Storage<int> nValue(5);
    Storage<double> dValue(3.14);

    nValue.print();
    dValue.print();

    return (0);
}
