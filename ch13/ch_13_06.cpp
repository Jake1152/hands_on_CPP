#include <iostream>
// #include <cstring>

using namespace std;

template<typename T, int size>
class   StaticArray
{
private:
    T   m_array[size];

public:
    T * getArray() { return m_array; }

    T & operator[](int idx)
    {
        return m_array[idx];
    }


    // member 함수로 변경
    void    print()
    {
        for (int cnt = 0; cnt < size; ++cnt)
            cout << (*this)[cnt] << ' ';
        cout << endl;
    }
};

template <int size>
void    print(StaticArray<char, size> & array)
{
    for (int cnt = 0; cnt < size; ++cnt)
        cout << array[cnt];
    cout << endl;
}

// 상소잉용 변환
template<class T, int size>
class   StaticArray : public StaticArray_BASE<T, size>
{

};

template<int size>
class   StaticArray : public StaticArray_BASE<char, size>
{
public:
    // member 함수로 변경
    void    print()
    {
        for (int cnt = 0; cnt < size; ++cnt)
            cout << (*this)[cnt] << ' ';
        cout << endl;
    }
};

int main()
{
    StaticArray<int, 4> int4;
    int4[0] = 1;
    int4[1] = 2;
    int4[2] = 3;
    int4[3] = 4;

    int4.print();

    StaticArray<char, 14> char14;
    char14[0] = 'H';
    char14[1] = 'e';
    // strcpy_s(char14.getArray(), 14, "Hello World");

    char14.print();

    return (0);
}
