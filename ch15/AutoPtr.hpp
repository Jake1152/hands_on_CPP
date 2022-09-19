// AutoPtr.hpp
#pragma once

#include <iostream>

template<class T>
class AutoPtr
{
public:
    T   *m_ptr = nullptr;

public:
    AutoPtr(T *ptr = nullptr)
        : m_ptr(ptr)
    {}

    AutoPtr(AutoPtr &a)
    {
        m_ptr = a.m_ptr;
        a.m_ptr = nullptr;
    }


    ~AutoPtr()
    {
        if (m_ptr != nullptr)
            delete m_ptr;
    }

    T&      operator*() const { return *m_ptr; }
    T*      operator->() const { return m_ptr; }
    bool    isNull() const { return m_ptr == nullptr; }
};
