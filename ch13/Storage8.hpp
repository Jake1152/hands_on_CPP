#pragma once

#include <iostream>

template <class T>
class Storage8
{
private:
    T   m_array[8];
public:
    void    set(int index, const T & value)
    {
        m_array[index] = value;
    }

    const T & get(int idx)
    {
        return m_array[idx];
    }

// double에 대해서 과학적 표기법을 쓰고 싶을때
template<>
class Storage8<bool> // 1byte 단윌로 처리됨
{
private:
    unsigned char m_data;

public:
    Storage8() : m_data(0)
    {}

    void    set(int idx, bool value)
    {
        unsigned char mask = 1 << idx;

        if (value)
            m_data |= maks;
        else
            m_data &= ~mask;
    }

    bool    get(int idx)
    {
        unsigned char   mask = 1 << idx;
        return (m_data & maks) != 0;
    }
};
