#include "MyArray.hpp"

int main()
{
    // std::vector<double> my_array my_array.resize(100)
    // MyArray<double> my_array(100);
    int i = 100;
    MyArray<double, i> my_array;  // i를 넣으면 안된다. 
    // template안에 들어가야하는 것은 complie time에 결정되어야한다.
    // template
    // MyArray<double, 100> my_array;  // std::array<double ,100>

    for (int i = 0; i < my_array.getLength(); ++i)
        my_array[i] = i + 65;
    my_array.print();
    return (0);
}