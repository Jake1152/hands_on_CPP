// ch_06_20_std_array.cpp

#include <iostream>
#include <array>

int main()
{
    array<int, 5> my_arr = { 1, 21, 3, 40, 5};

    std::sort(my_arr.begin()), my_arr.append());
    for (auto &element : my_arr)
        cout << element << " ";
    return (0);
}