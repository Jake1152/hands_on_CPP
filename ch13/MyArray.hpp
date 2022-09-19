#pragma once
#include <assert.h>
#include <iostream>

// template을 통한 일반화
// template에 클래스 이외에 다른 것도 올 수 있으니 typename을 쓰는 것을 권장, 
// 하지만 바로 class name적어도 가능
// data 담는 자료형의 경우 T template으로 치환해준다.
// return되어서 나가는 것도 T로 치환한다.
// template<typename T> // template으로 적을때 어떠한 타입에 대한 매개변수이다.
template<typename T, unsigned int T_SIZE> // 이렇게 넣으면 T_SIZE가 complie time에 결정된다.
class   MyArray
{
private:
    // int m_length; // 길이
    T   *m_data;  // int type data // T로 일반화

public:
    MyArray()
    {
        // m_length = 0;
        m_data = nullptr;
    }

    MyArray(int length)
    {
        m_data = new T [length];
        // m_length = length;
    }

    ~MyArray()
    {
        reset();
    }

    void    reset()
    {
        delete[] m_data;
        m_data = nullptr;
        // m_length = 0;
    }

    T & operator[](int index)
    {
        // assert(index >= 0 && index < m_length);
        assert(index >= 0 && index < T_SIZE);
        return m_data[index];
    }

    int getLength()
    {
        // return m_length;
        return T_SIZE;
    }

    // void    print();
    // explicit instantiation하면 관리하기 여럽다 그래서 아래와 같이 처리한다.
    void    print()
    {
        for (int i = 0; i < T_SIZE; i++)
            std::cout << m_data[i] << " ";
        std::cout << std::endl;
    }
};

// 밖으로 뺀 경우
// template type이 아니었다면
// void    MyArray<T>::print()
// {
//     for (int i = 0; i < m_length; i++)
//         std::cout << m_data[i] << " ";
//     std::cout << std::endl;
// }

// template<typename T>
// void    MyArray<T>::print()
// {
//     for (int i = 0; i < m_length; i++)
//         std::cout << m_data[i] << " ";
//     std::cout << std::endl;
// }
