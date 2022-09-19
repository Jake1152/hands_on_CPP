#include "MyArray.hpp"

template<typename T>
void    MyArray<T>::print()
{
    for (int i = 0; i < m_length; i++)
        std::cout << m_data[i] << " ";
    std::cout << std::endl;
}


template void MyArray<char>::print();