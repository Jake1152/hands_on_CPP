// ch_06_08_pointer_and_static_array.cpp

#include <iostream>

using namespace std;

void    print_array(int array[])
{
    cout << sizeof(array) << endl; // 20?
    cout << *array << endl; // 20?
}

struct my_struct
{
    int array[5] = {11,2,3,4,5};
};

void    doSomething(my_struct *ms)
{
    cout << sizeof((*ms).array) << endl;
    cout << sizeof(ms) << endl;
}

int main()
{


    // int array[5] = {9, 7, 5, 3, 1};

    // cout << array[0] << " " << array[1] << endl;
    // cout << array << endl;
    // cout << &(array[0]) << endl;

    // cout << *array << endl;

    // int *ptr = array;
    // cout << ptr << endl;
    // cout << *ptr << endl;

    int array[5] = {9, 7, 5, 3, 1};

    cout << sizeof(array) << endl;

    int *ptr = array;

    cout << *ptr << " " << *(ptr + 1) << endl;
    // 포인터를 이용해서 배열 접근 가능

    // 구조체안에 array 넣고 구조체 보내기
    my_struct *ms;
    doSomething(ms);


    // cout << sizeof(ptr) << endl;

    // print_array(array);

    // cout << array[0] << " " << *array << endl;

    return (0);
}