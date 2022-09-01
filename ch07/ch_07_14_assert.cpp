// ch_07_14_assert.cpp

#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void    printValue(const std::array<int, 5> &my_array, const int &idx)
{
    assert(idx >= 0);
    assert(idx <= my_array.size() - 1);
    cout << my_array[idx] << endl;
}
int main()
{
    // debug 모드에서만 동작한다.
    // release모드에서만 동작한다.

    // int number = 5;

    // number should be 5, 이렇게적으면 디버깅을 위해 찍어봐얗나다.
    // assert하면 확인된다. 단, debug모드에서 실행된다.
    // release에서는 빠르게 돌아야하니까 뺸다.
    // assert(number == 5);

    // std::array<int, 5> my_array = { 1, 2, 3, 4, 5};

    // printValue(my_array, 4);

    const int x = 5;

    // assert(x == 5);

    static_assert(x == 5, "x should be 5"); // compile time에 결정되는 경우에만 쓸 수 있다.

    return (0);
}