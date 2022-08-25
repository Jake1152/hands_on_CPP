#include <iostream>
#include "ch_04_02_global.hpp"

using namespace std;

extern int a = 123;

void    doSomething()
{
    cout << "in extern variable CPP\n" << Constants ::pi << endl;
    cout <<  &(Constants ::pi) << endl;
}