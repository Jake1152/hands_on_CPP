// ch_07_16_ellipsis.cpp

#include <iostream>
#include <string>

using namespace std;

// 파라미터로 들어올 args개수를 적어준다.
// ...이 들어올 가변인자들, printf와 같은 형태
// mordern CPP이용해서 사용
// avg를 구한다면 array하나를 넣는다.
// 예제는 ellpisis 소개를 위한것
double findAverage(int cnt, ...)
{
    double  sum = 0;

    va_list list;

    va_start(list, cnt);
    // va_list type이어야한다.
    for (int arg = 0; arg < cnt; ++arg)
        sum += va_arg(list, int);
    va_end(list);

    return (sum / cnt);
}

/*
    - 어떤타입으로 들어갈지는 정해져있어야한다.
    - tric들을 쓸수있다.
        - 편하게 쓸지 할수있다ㅣ/
    - 암호문처럼하고 해석하는 방식
    - 마지막 파라미터느 끝났다는 형태를 넣을 수 있다.
    - null 넣듯이 한다.
*/
int main(int argc, char **argv)
{
	cout << findAverage(1, 1, 2, 3, "Helllo", 'c') << endl;
    cout << findAverage(3, 1, 2, 3) << endl;
    cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
    // 첫번쨰 인자로 넣은 입력되는 인자의 개수하고 실제 들어가는 인자의 개수를 맞추어주어야한다.
    cout << findAverage(10, 1, 2, 3, 4, 5) << endl;
	return (0);
}