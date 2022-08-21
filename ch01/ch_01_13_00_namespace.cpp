// ch_01_13_00_namespace.cpp

#include <iostream>

using namespace std;

namespace	MySpace1
{
	namespace InnerSpace
	{
		void	my_function()
		{
			cout << "inception function" << endl;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace	MySpace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

int main()
{
	{
		// using namespace MySpace1;
		using namespace MySpace1::InnerSpace;
		my_function();
	}

	using namespace MySpace2;

	cout << doSomething(42, 2) << endl;
}
