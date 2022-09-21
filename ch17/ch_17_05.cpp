#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str1("one");

    string str2;
    str2 = str1;
    str2= "two";
    str2.assign("two").append(" ").append("three");

    // cout << str2 << endl;

    std::swap(str1, str2);

    cout << str1 << " " << str2 << endl;

    str1.swap(str2);

    cout << str1 << " " << str2 << endl;

    str1.append("Four"); // overloading함수가 많다 
    str1 += "Five";
    str1.push_back('S'); // 문자열은 안되며 문자만 가능

    str1 = str2 + "Six";

    return (0);
}