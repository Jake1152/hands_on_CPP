// ch_02_04_00_void.cpp

#include <iostream>

using namespace std;

// return type이 없어도 void, 파라미터에서는 명시적으로 하기위해 void를 사용 안넣어도 무방
void    my_function(void)
{
    ;
}

int main()
{
    // void    my_void;
    // 메모리를 차지하지 않기때문에 void 변수를 선언할 수 없다.
    int i = 123;
    float f = 123.456f;

    void *my_void; // (void *) 포인터 변수
    
    my_void = (void *)&i; // &i 정수형 변수의 주소
    cout << "my_void = (void *)&i -> " << &my_void << endl;
    my_void = (void *)&f; // &f 실수형 변수의 주소
    cout << "my_void = (void *)&f -> " << &my_void << endl;
}