// ch_04_04_auto_keyword.cpp

#include <iostream>

/*
- auto keyword
    - 자료형 추론

*/
using namespace std;

// int add(int x, int y)
// {
//     return (x + y);
// }

// C++11버젼이라면서 진행되지 않음
// 자동으로 자료형을 추론해서 적용해준다.
auto add(auto x, auto y)
{
    return (x + (double)y);
}

int main(void)
{
    auto a = 123; // python 처럼 처리됨
    auto d = 123.0;
    auto c = 1 + 2.0;

    /*
        자동형추론을 할때 개발자가 어떤 데이터타입이 나올지 알고있는게 낫다.
        예상치 못한 결과가 생기면 안되므로.
    */
   auto result = add(1, 2);
   cout << "result : " << result << endl;
    // auto를 이용해서 return value, parameter에는 쓸수없다.
    // template를 쓰면 가능하다.
    // cpp return type ++17부터는 여러개 타입을 반환할 수 있다.
    // auto -> tailing
    // type hint와 비슷, 코드를 보기 좋다.

    auto add(int x, int y) -> int;
    auto add(int x, int y) -> double;

    ->
    int     add(int x, int y);
    double     add(int x, int y);
    
    return (0);
}
