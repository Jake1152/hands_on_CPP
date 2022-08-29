// ch_06_05_static_multidimension_array.cpp

#include <iostream>

using namespace std;

int main()
{
    const int   num_rows = 3;
    const int   num_columns = 5;

    for (int row = 0; row < num_rows; ++row)
    {
        for (int col = 0; col < num_columns; ++col)
            cout << '[' << row << ']' << '[' << col << ']' << '\t';
        cout << endl;
    }

    cout << endl;

    // int array[][num_columns] = 
    // {
    //     {1, 2, 3, 4, 5}, // row =0
    //     {5, 6, 7, 8, 9}, // row =1
    //     {10, 12, 13, 14, 15} // row =2
    // };

    // for (int row = 0; row < num_rows; ++row)
    // {
    //     for (int col = 0; col < num_columns; ++col)
    //         // cout << array[row][col] << endl;
    //         cout << array[row][col] << endl;
    // }

    int array[5][4][3]; // 3차원
    // 딥러닝한다면 다차원 잘 알아야한다.
    // }

    return (0);
}