// ch_06_07a_null_pointer.cpp

#include <iostream>
#include <cstddef>

using namespace std;

void    do_something(double *ptr)
{
	std::cout << "address of pointer varaibe in do_something() " << &ptr << std::endl;

	if (ptr != nullptr)
	{
		// do something
		cout << *ptr << endl;
	}
	else
	{
		// do nothing using that pointer
		cout << "ptr is null"<< endl;
	}
}

int main()
{
	double	d = 3.14;
	double  *ptr = nullptr; // modern c++

	if (ptr != nullptr)
	{
		; // do something
	}
	else
	{
		;// do nothing
	}
	do_something(ptr);
	ptr = &d;
	do_something(ptr);

	std::nullptr_t nptr;
	// nullptr만 파라미터로 써야하는 경우에 쓸만하다고 한다.

	cout << "addres of pointer vairable in main()" << &ptr << endl;
	return 0;
}