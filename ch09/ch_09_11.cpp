// ch_09_11.cpp

#include <iostream>
#include <cassert>

using namespace std;

class   MyString
{
// private: 
public:// 주소를 찍기 위해 public으로 처리, private으로 하는게 encapsulation에 좋다.
    char    *m_data = nullptr;
    int     m_length = 0;

public:
    MyString(const char *source = "")
    {
        assert(source);

        m_length = std::strlen(source) + 1;
        m_data = new char[m_length];

        for (int i = 0; i < m_length; ++i)
            m_data[i] = source[i];
        m_data[m_length - 1] = '\0';
    }
};

void doSomething(Fraction frac)
{
    cout << frac << endl;
}

int main()
{
	return (0);
}