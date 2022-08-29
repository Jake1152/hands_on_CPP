// ch_06_07_pointer.cpp

#include <iostream>
#include <typeinfo>

using namespace std;

// int *do_something()
// {
//     ;
// }

struct Something
{
    int a, b, c, d;
};

int main()
{
    // int x = 5;

    // cout << x << endl;
    // cout << &x << endl; // & : address of operator
    
    // cout << *(&x) << endl;
    // cout << x << endl;  위와 같다. *& 상쇄됨

    // pointer 주소를 기억하는 변수에 불과하다.
    // referencing 이후에 등장
    // int *ptr_x;
    // ptr_x = &x;

    // // int* ptr_x = &x, ptr_y = &x;
    // // ptr_y = &x 이 부분이 pointer가 아니게 된다.
    // // 그러므로 int *, int * variable 같은 형식으로 포인터를 표기한다.
    // typedef int* pint;
    // pint ptr_x = &x, ptr_y = &x;
    // // 이렇게하면 int에 pointer type을 정의한것이라 괜찮다고 한다.
    // // int *ptr_x = &x, ptr_y = &x; // 보통 이렇게함

    // cout << ptr_x << endl;
    // cout << *ptr_x << endl;
    // // 다른 언어에서도 내부적으로는 포인터를 쓴다.

    // double d = 1.0;
    // // int *ptr_x = &d; // 다른 타입을 가리켜서 문제
    // // 같은 타입이어얗나다.
    // double *ptr_d = &d;

    // 해킹의 원리 메모리 주소를 바꿔친다.
    // 직접 주소에 접근
    // double *ptr_d = 0x004FFDA8;

    // int x = 5;
    // cout << typeid(&x).name() << endl;

    // int x =5;
    // double d = 3.14;
    // int *ptr_x;
    // double *ptr_d;

    // cout << sizeof(x) << endl;
    // cout << sizeof(d) << endl;
    // cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
    // cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;

    // Something ss;
    // Something *ptr_s;

    // cout << sizeof(Something) << endl;
    // cout << sizeof(ptr_s) << endl;

    int x =5;
    double d = 3.14;
    int *ptr_x;
    double *ptr_d;

    cout << *ptr_x << endl;
    cout << *ptr_d << endl;

    return (0);
}
