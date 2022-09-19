#include "MyArray.hpp"
// #include "ch_13_02_01.cpp"

// template<typename T>
// void    MyArray<T>::print()
// {
//     for (int i = 0; i < m_length; i++)
//         std::cout << m_data[i] << " ";
//     std::cout << std::endl;
// }

int main()
{
    // MyArray my_array(10);
    MyArray<char> my_array(10);

    for (int i = 0; i < my_array.getLength(); ++i)
        my_array[i] = i + 'a';
    
    my_array.print();

    return (0);
}