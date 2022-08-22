// ch_02_03_00_fixed_width_Integer.cpp

#include <iostream>
// #include <cstdint> // 고정너비 정수 사용을 위해 필요하다.
// iostream에 포함되어있다.

// 데이터 타입의 크기가 컴파일러마다 실제 구현된 사이즈가 다를수있다.
// CPP 11부터는 고정너비 정수를 쓸 수 있다.
int main()
{
    using namespace std;

    std::int16_t    i(5);
    std::int8_t     myint = 65;

    cout << myint << endl;

    std::int_fast8_t fi(5);
    std::int_fast64_t fl(5);
    
}