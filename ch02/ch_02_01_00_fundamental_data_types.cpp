// ch_02_01_00_fundamental_data_types.cpp

#include <iostream>

using namespace std;

int main()
{
    bool    bValue = false;
    char    chValue = 'A';
    // char    chValue = 65;
    float   fValue = 3.141592f;
    double  dValue = 3.141592;
    // float   fVlae
    // cout << (bValue ? 1 : 0) << endl;
    auto    aValue = 3.141592;
    auto    aValue2 = 3.141592f;

    // sizeof 연산자는 변수, data type 둘다에 쓸 수 있다.
    cout << "sizeof(char)" << sizeof(char) << endl;
    cout << "sizeof(unsigned char)" << sizeof(unsigned char) << endl;
    cout << "sizeof(int)" << sizeof(int) << endl;
    cout << "sizeof(float)" << sizeof(float) << endl;
    cout << "sizeof(double)" << sizeof(double) << endl;
    cout << "sizeof(bool)" << sizeof(bool) << endl;
    cout << "sizeof(aValue2)" << sizeof(aValue2) << endl;

    int i = (int)3.141592;      //  copy initialization
    int a(123);                 //  direct initialization
    int b{ 123 };               //  uniform initialization
    // 객체지향은 원하는 데이터타입을 만들어 쓰는 것
    // 만들어놓은 데이터타입을 초기화할때 많이 쓴다.
    // 코드를 읽기 위해서도 다양한 문법을 아는 것이 좋다.
    // int k, l, m = 123; // 모두 초기화하는 것으로 착각할 수 있으므로 권장하지 않는다.
    // ->
    int k = 0, l = 42, m = 123;
    변수선언의 위치가 달라질 수도 있다.
    스타일의 변화로 사용하기 직전에 선언하기도 한다.
    디버깅하기 좋다.
    변수와 기능이 묶여있어야 리팩토링이 편하다.
    // cout << chValue << endl;
    // cout << fValue << endl;
    // cout << dValue << endl;



    return 0;
}
