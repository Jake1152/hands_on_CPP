// ch_06_12_dynamic_allocation_array.cpp

#include <iostream>

using namespace std;

int main()
{
    // int length;

    // cin >> length;

    // int array[length];
    // int *array = new int[length]();
    // int *array = new int[length](); // ()를 씀으로써 0으로 초기화
    // int *array = new int[length](123); // 하지만 안에 값을 넣으면 그건 돌지 않는다. 
    // int *array = new int[length] {11, 22, 33, 44, 55, 66}; 
    // // error 발생
    // // 할당한 값은 5인데 그보다 범위를 넘어서는 값을 넣으서 문제가 발생했다.

    // array[0] = 1;
    // array[1] = 2;

    // for (int i = 0; i < length; ++i)
    // {
    //     cout << (uintptr_t)&array[i] << endl;
    //     cout << array[i] << endl;
    // }
    // delete [] array;

    int fixedArray[] = {1, 2, 3, 4, 5};
    // compile time에 사이즈가 5인지 알수있다ㅣ./

    // int *array = new int[]{1,2,3,4,5};
    
    int *array = new int[3]{1,2,3,4,5};

    // resizing
    // int 5개 짜리로 바꿀 수 있는가?
    // 받은 메모리를 더 큰 메모리로 바꾼다음에 복사
    // 정적메모리를 불가
    // 3칸은 유지한 상태에서 뒤에 2칸을 유지 가능한지 OS에 요청한다.
    // 안되면 새로운 공간에 할당해서 복사해야한다.
    // 뒤에서 vector를 한다.
    delete[] array;

    // cout << sizeof(fixedArray) << endl;
    return (0);
}