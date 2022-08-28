// ch_05_07_for_loop.cpp

#include <iostream>

int pow(int base, int exponent)
{
    int result = 1;

    for (int count = 0; count < exponent; ++count)
        result *= base;
    return (result);
}

int main()
{
    using namespace std;
    // int count;

    // for (count = 0; count < 10; ++count) // iteration
    //     cout << count << endl;
    // cout << count << endl;

    // while(true)
    // int count = 0;
    // for (;; count++)
    //     cout << count << endl;

    // cout << pow(3, 3) << endl;

    // for (int i=0, j = 0; i < 10; ++i, --j)
    //     cout << i << " " << j << endl;

    // int i;
    // int j;
    // for (i = 1;i < 10; ++i)
    // {
    //     for (j = 1;j < 10; ++j)
    //     {
    //         cout << i << " level " << i << " * " << j << " = " << i * j << endl;
    //     }
    //     cout << endl;
    // }

    for (unsigned int i = 9; i >= 0; --i)
        cout << i << endl;
    return 0;
}