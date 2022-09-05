// ch_09_02_input_output_operator_overloading.cpp

#include <iostream>
#include <fstream>

using namespace std;

class   Point
{
private:
	int m_x, m_y, m_z;

public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0)
        : m_x(x), m_y(y), m_z(z)
    {}

    double  getX() { return m_x; }
    double  getY() { return m_y; }
    double  getZ() { return m_z; }

    // void    print()
    // {
    //     cout << m_x << " " << m_y << " " << m_z << endl;
    // }


    friend std::ostream& operator << (std::ostream &out, const Point &point)
    {
        out << " ( " << point.m_x << " " << point.m_y << " " << point.m_z << " ) " ;

        return out; // d
    }

    friend std::istream& operator >> (std::istream &in, Point &point)
    {
        in >>  point.m_x  >> point.m_y  >> point.m_z;

        return in;
    }

};


int main()
{
    // # 3 in
    ofstream of("out.txt");

    // Point   p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);
    Point   p1, p2;

    cin >> p1 >> p2;

    cout << p1 << " " << p2 << endl;
    // of << p1 << " " << p2 << endl;

    // of.close();
    // # 2 out
    // ofstream of("out.txt");

    // Point   p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);

    // cout << p1 << " " << p2 << endl;
    // of << p1 << " " << p2 << endl;

    // of.close();
    // # 1
    // Point   p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);

    // // 연산자 오버로딩하는 경우
    // cout << p1 << " " << p2 << endl;

    // 파일 출력이 스트림이라 편하다


	return (0);
}