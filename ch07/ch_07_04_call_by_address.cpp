// ch_07_04_call_by_address.cpp
#include <iostream>

using namespace std;


// void    foo(const int *x)
void    foo(const int *x)
{
    cout << *x << " " << x << " "  << &x << endl;
}

void    sinCos(const double degrees, double *sin_out, double *cos_out)
{
	*sin_out = 1.0;
	*cos_out = 2.0;
}

int main()
{
    int value = 5;

    cout << value << " " << &value << endl;

    int *ptr = &value;

    foo(ptr);
    foo(&value);
    // foo(5);

    double  degrees = 30;
    double  sin, cos;

    sinCos(degrees, &sin, &cos);
    cout << sin << " " << cos << endl;

	return (0);
}

