// ch_07_06_inline.cpp
#include <iostream>
using namespace std;

// inline, 함수가 아닌것처럼 동작한다.
// 권장권유
// 최근 컴파일러에서는 알아서 인라인이 빠를때 대체한다.
inline int min(int x, int y)
// int min(int x, int y)
{
    return (x > y ? y : x);
}
int main()
{

    cout << min(5, 6) << endl;
    cout << min(3, 2) << endl;

    cout << (5 > 6 ? 6 : 5) << endl;
    cout << (3 > 2 ? 2 : 3) << endl;
	return (0);
}


