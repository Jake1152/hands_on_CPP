#include <iostream>
#include <string>

using namespace std;

int main()
{
    // # 1
    string  my_str("0123456789");
    my_str.reserve(1000); // 미리 용량을 확보할수있다.
    
    // string  my_str(""); // null이 숨어있다.
    // null을 별도로 보관하지 않는다.

    cout << std::boolalpha;
    // cout << my_str.empty() << endl;
    cout << my_str.length() << endl;
    cout << my_str.size() << endl;
    cout << my_str.capacity() << endl;
    cout << my_str.max_size() << endl;

    return (0);
}
