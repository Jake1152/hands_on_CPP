// ch_09_12.cpp

#include <iostream>
#include <cassert>
#include <initializer_list>

using namespace std;

class   IntArray
{
private:
    unsigned    m_length = 0;
    int         *m_data = nullptr;

public:
    // 중복되는 것은 곳에서만 처리
    IntArray(unsigned int length)
        : m_length(length)
    {
        m_data = new int[length];
    }

    IntArray(const std::initializer_list<int> &list)
        : IntArray(list.size())
    {
        int cnt = 0;
        for (auto & element : list)
        {
            m_data[cnt] = element;
            cnt++;
        }

        // for (unsigned cnt = 0; cnt < list.size(); ++cnt)
        //     m_data[cnt] = list[cnt]; // error
        //     // 이니셜라이즈 리스트에서는 대괄호를 쓸 수없다.
    }

    ~IntArray()
    {
        delete[] this->m_data;
    }

    // assignment operator도 같이하는것이 좋다

    friend ostream & operator << (ostream & out, IntArray & arr)
    {
        for (unsigned i = 0; a < arr.m_length; ++i)
            out << arr.m_data[i] << " ";

        return out;
    }
};


int main()
{
    int my_arr1[5] = {1,2,3,4,5};
    int my_arr2 = new int[5]{1,2,3,4,5};

    auto il = { 10 , 20 , 30};

    // IntArray int_array { 1,2,3,4,5};
    cout << int_array << endl;

	return (0);
}