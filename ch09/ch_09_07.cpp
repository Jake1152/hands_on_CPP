// ch_09_07.cpp
#include <iostream>

using namespace std;

class   Accmulator
{
private:
	int m_counter = 0;

public:
    int operator()(int i) { return (m_counter += i); }
};

int main()
{
    // functor라고 부른다고한다.
    // 괄호 연산자 오버로딩
    Accmulator  acc;
    cout << acc(10) << endl;
    cout << acc(20) << endl;

	return (0);
}
