// ch_08_05_Delegrating_Constructors.cpp

#include <iostream>
#include <string>

using namespace std;

class   Student
{
private:
    int     m_id;
    string  m_name;
    // double  m_double; // 생성자에서 초기화 안해줘도 있다.

public:
    // name만 넣어서 객체를 만들고 싶을때 새로운 생성자를 만든다. m_id는 default로 한다.
    Student(const string &name_in)
        // : m_id(0), m_name(name_in)
        : Student(0, name_in)
    {}
    Student(const int &id_in, const string &name_in)
        : m_id(id_in), m_name(name_in)
    {}

    // C++11 이전 버젼
    // Student(const string &name_in)
    //     // : m_id(0), m_name(name_in)
    //     // : Student(0, name_in)
    // {
    //     init(0, name_in);
    // }
    // Student(const int &id_in, const string &name_in)
    //     // : m_id(id_in), m_name(name_in)
    // {
    //     init(id_in, name_in);
    // }
    // 만능생성자 사용 및 초기화 코드를 분리하는 경우
    void    init(const int &id_in, const string &name_in)
    {
        m_id = id_in;
        m_name = name_in;
    }

    void    print()
    {
        cout << m_id << " " << m_name << " "  << endl;
    }
};


int main()
{
    Student estidiante(0, "Jake");
    estidiante.print();  

    Student estidiante_dos("Dos");
    estidiante_dos.print();

    // id 입력해서 갖는 생성자를 갖고 싶을때
    // default값은 오른쪽부터 넣어주어야한다.



    return (0);
}