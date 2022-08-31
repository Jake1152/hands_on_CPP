// ch_06_19_multil_pointer_dynamic_multi_array.cpp

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    // int *ptr = nullptr;
    // int **ptrptr = nullptr;

    // int value = 5;

    // ptr = &value;
    // ptrptr= &ptr;

    // cout << ptr << " " << *ptr << " " << &ptr << endl;
    // cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
    // cout << **ptrptr << endl;
    // cout << ptrptr[0][0] << endl;
    // cout << *ptrptr[0] << endl;
    // cout << ptrptr[0] << endl;

    const int   row = 3;
    const int   col = 5;

    // const int   s2da[][col]과 동일
    const int   s2da[row][col] =
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    int *r1 = new int[col] {1, 2, 3, 4, 5};
    int *r2 = new int[col] {6, 7, 8, 9, 10};
    int *r3 = new int[col] {11, 12, 13, 14, 15};
    // int pointer를 쓰면 row가 몇개 들어올지 모를떄도 처리 할 수 있다.

    // for (int idx = 0; idx < sizeof(r2) / sizeof(typeid(r2[0]).name()); idx++)
    //     cout << r2[idx] << endl;
    // sizeof(r2) / sizeof(typeid(r2[0]).name()) 가리키는 곳이 둘다 int *이다
    // typeid(r2[0]).name(), typeid(r2).name() 둘다 동일
    
    // 동적할당해서 sizeof로는 배열의 크기를 알 수 없다.
    for (int idx = 0; idx < sizeof(r1) / sizeof(int); idx++)
        cout << r1[idx] << endl;
    cout << endl;
    for (int idx = 0; idx < sizeof(r2) / sizeof(int); idx++)
        cout << r2[idx] << endl;
    cout << endl;
    for (int idx = 0; idx < sizeof(r3) / sizeof(int); idx++)
        cout << r3[idx] << endl;
    cout << endl;
    int **rows = new int*[row] {r1, r2, r3};

    for (int r = 0; r < row; ++r)
    {
        for (int c = 0; c < col; ++c)
            cout << rows[r][c] << " ";
        cout << endl;
    }
    
    delete[] r1;
    delete[] r2;
    delete[] r3;
    delete[] rows;

    return (0);
}