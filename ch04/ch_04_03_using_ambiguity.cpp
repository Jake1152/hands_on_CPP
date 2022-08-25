// ch_04_03_using_ambiguity.cpp

#include <iostream>

/*
큰 프로그램을 만들다보면 이름이 겹치는 경우가 많아진다.
객체지향에서는 이름이 겹치게되는 오버로딩 오버라이딩을 권장하기도한다.
*/

namespace   a
{
    int my_var(10);
}

namespace   b
{
    int my_var(20);
}

/*
- using
*/
int main()
{
    // using namespace std;
    // using std::cout; // cout만 가져오는 방법 , namespace없이 사용
    // using std::endl; // cout만 가져오는 방법 , namespace없이 사용

    // cout << "Hello " << endl; // endl;은 

    // using namespace a;
    // using namespace b;

    // cout << my_var << endl; // ambiguous

    // 아래처럼 이름이 다르면 전혀 문제 없지만 이름이 같은 경우가 문제
    // cout << my_a << endl;
    // cout << my_b << endl;

    using namespace std;
    {
        using namespace a;
        cout << my_var << endl;
    }

    {
        using namespace b;
        cout << my_var << endl;
    }
    // 영역을 쪼개거나, 헤더파일에 넣어서 하다가 꼬일 수 있다.
    // 헤더에 using namespace를 넣기보다는 소스파일에 넣는것이 위험성을 피할수있다.
    // 전역에서 사용은 피한다.
    // 되도록 적은 범위에 영향이 가게한다.
    // 서로 꼬이는 문제 방지!!
    return (0);
}
