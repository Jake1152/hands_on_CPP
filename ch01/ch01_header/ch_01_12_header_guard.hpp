// #pragma

#ifndef CH_01_12_HEADER_GUARD_HPP
# define CH_01_12_HEADER_GUARD_HPP
#include <iostream>
#include "ch_01_11_00_headerfile.hpp"

using namespace std;

// 헤더가드를 쓰면 소스까지 있어도 문제가 안생긴다.

void    doSomething()
{
    cout << add(42, 0) << endl;
}


#endif