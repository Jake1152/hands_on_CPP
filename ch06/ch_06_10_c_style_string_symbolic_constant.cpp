// ch_06_10_c_style_string_symbolic_constant.cpp

#include <iostream>

using namespace std;

const char  *getName()
{
    return ("jake jim");
}

int main()
{
    // const char  *name = "jake jim";
    // const char  *name2 = "jake jim";

    // cout << (uintptr_t)name << endl;
    // cout << (uintptr_t)name2 << endl;

    int int_arr[5] = {1,2,3,4,5};
    char char_arr[] = "Hello, World!";
    const char *name = "jim jake";

    cout << int_arr << endl;
    cout << char_arr << endl;
    cout << name << endl;
}


