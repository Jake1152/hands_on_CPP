// ch_04_06_std_string.cpp

#include <iostream>
#include <string>
#include <limits.h>
using namespace std;

int main()
{
    // 문자열 맨 뒤에 \0이 들어간다., c stype
    // 현재 방식은 cpp방식
    // const char my_strs[] = "Hello, World";
    // const string my_hello = "Hello, World";

    // cout << my_strs << endl;
    // cout << my_hello << endl;
    // cout << "Hello, World" << endl;

    // string my_ID = 123; // 암시적 형변환이 없어서 안된다
    // string my_ID = "123"; //
    // cout << my_ID << endl;

    // cout << "Your name ? : ";
    // std::cin.ignore(std::numeric_limits<std::streamsi >::max(), '\n');
    // // \n이 들어올때까지 해당 숫자만큼은 입력을 날려라
    // // 32767 2byte max number
    // string name;
    // // cin >> name; // 띄어쓰기 입력된 다음 공백까지 다음으로 넘어가는 문제가 있다.
    // std::getline(std::cin, name);

    // string a("Hello, ");
    // string b("world, ");
    // string hw = a + b; // append

    // hw += "I'm good";

    // cout << hw << endl;
    
    string a("Hello, world");
    cout << a.length() << endl;
    // 입력받을 값을 담을 변수를 넣는다.

    // getline() 엔터 칠때까지 입력받는다.
    // line 단위로 읽는다
    return (0);
}
