#include "ch_08_08_class_code_and_header_file.hpp"
#include <iostream>

// Calc	&add(int value)
Calc& Calc::add(int value)
{
    m_value += value;
    return *this;
}

Calc& Calc::sub(int value)
{
    m_value -= value;
    return *this;
}

Calc& Calc::mult(int value)
{
    m_value *= value;
    return *this;
}

void Calc::print()
{
    using namespace std;
    cout << m_value << endl;
}