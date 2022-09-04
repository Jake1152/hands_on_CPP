// ch_09_03_unary_operator_overloading.cpp

#include <iostream>
#include <fstream>

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

	friend std::ostream &operator <<  (std::ostream &out, const Cents &cents)
	{
        out << cents.m_cents;
		return out;
	}

    bool operator ! () const
    {
        // !Cents(...)
        return (m_cents == 0) ? true : false ;
    }
};

int main()
{
    // # 2
    Cents   cents1(6);
	Cents	cents2(0);

    // auto temp = !cents1;
    cout << "normal : " << cents1 << " " << cents2  << endl;
    cout << "not : " << !cents1 << " " << !cents2  << endl;
	
    // # 1
	// Cents   cents1(6);
	// Cents	cents2(42);
	
    // cout << cents1 << endl;
    // cout << -cents1 << endl;
    // cout << -Cents(-10) << endl;


	return (0);
}