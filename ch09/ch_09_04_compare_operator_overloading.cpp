// ch_09_04_compare_operator_overloading.cpp

#include <iostream>
#include <vector>
#include <fstream>
// #include <random>
#include <algorithm>

using namespace std;

class   Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int	&getCents() { return m_cents; }

    Cents operator - () const
    {
        return Cents(-m_cents);
    }

     friend bool operator < (const Cents &c1, const Cents &c2)
    {
        return c1.m_cents < c2.m_cents;
    }

    friend bool operator > (const Cents &c1, const Cents &c2)
    {
        return c1.m_cents > c2.m_cents;
    }

    friend bool operator == (const Cents &c1, const Cents &c2)
    {
        return c1.m_cents == c2.m_cents;
    }

    friend bool operator != (const Cents &c1, const Cents &c2)
    {
        return c1.m_cents != c2.m_cents;
    }

	friend std::ostream &operator << (std::ostream &out, const Cents &cents)
	{
        out << cents.m_cents;
		return out;
	}

};

int main()
{

    // # 2
    vector<Cents> arr(20); // Cents들끼리 비교안됨, 크기비교 연산자 오버로딩 필요
    for (unsigned i = 0; i < 20; ++i)
        arr[i].getCents() = i;

    std::random_shuffle(begin(arr), end(arr));

    for (auto &e : arr)
        cout << e << " ";
    cout << endl;

    std::sort(begin(arr), end(arr));

    for (auto &e : arr)
        cout << e << " ";
    cout << endl;

    // # 1
    // Cents   cents1(6);
	// Cents	cents2(6);
    // // error 연산자 없음
    // // == 연산자 오버로딩
    // if (cents1 == cents2) 
    //     cout << "Equal " << endl;
    // else if (cents1 != cents2) 
    //     cout << "not Equal " << endl;
    // cout << std::boolalpha;
    // auto temp = !cents1;
    // cout << "normal : " << cents1 << " " << cents2  << endl;
    // cout << "not : " << !cents1 << " " << !cents2  << endl;
	
    // # 0
    // int a = 3;
    // int b = 3;
    // if (a == b)
    //     cout << "Equal " << endl;


	return (0);
}