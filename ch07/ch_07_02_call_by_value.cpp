// ch_07_02_call_by_value.cpp
#include <iostream>

using namespace std;

void doSomething(int x)
{
    cout << "In func " <<  x << " " << &x << endl;
}

int main()
{
	doSomething(6);

    int x = 6;
	cout << "In main " << x << " " << &x << endl;

    doSomething(x);
    doSomething(x + 1);

	return (0);
}

