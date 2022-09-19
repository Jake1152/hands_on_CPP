#include <iostream>
#include "Resource.hpp"
#include "AutoPtr.hpp"

using namespace std;

//RAII : resource acquistion is initailization
// 할당한 곳에서 해제해줘야한다.
void    doSomething()
{

	try
	{
		Resource    *res = new Resource;	// dull pointer

		// return을 먼저하는 경우 메모리 헤제필
		// 하지만 스마트포인터 쓰면 안해도 가능
		if (false) 
		{
			throw - 1; // exception

			delete res;
		}
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	// doSomething();
	{
		AutoPtr<Resource>	res1(new Resource);
		AutoPtr<Resource>	res2;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		// 문제 될수있다
		// auto ptr
		res2 = res1;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}

	// syntax vs. semantics
	int x = 1, y = 1;
	x + y;

	string str1("Hi")	, str2("Hi");
	str1 + str2;

	doSomething(res1);
	// value semantics (copy)
	// reference semantice (pointer)
	// move semantics (move)

	return (0);
}