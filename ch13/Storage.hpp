#pragma once

#include <iostream>

template <class T>
class Storage
{
private:
    T   m_value;
public:
    Storage(T value)
    {
        m_value = value;
    }

    ~Storage()
    {
    }

    
    void print()
    {
        std::cout << m_value << '\n';
    }
};

// double에 대해서 과학적 표기법을 쓰고 싶을때
template<>
void    Storage<double>::print()
{
    std::cout << "Double Typ ";
    std::cout << std::scientific << m_value << '\n';
}