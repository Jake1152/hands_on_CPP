#include <iostream>
#include <string>

using namespace std;

int main()
{
    string  my_str("abcdefg");

    // 예외처리 단점
    // 느려진다.
    // 예외처리를 안할수도 있다.
    // 예외처리 넣는 버젼이 따로 필요하다.
    try
    {
        // my_str[100] = 'X';
        my_str.at(100) = 'X';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    cout << my_str[0] << endl;
    cout << my_str[3] << endl;

    // my_str[42] = 'Z';

    cout << my_str << endl;
    return (0);
}
