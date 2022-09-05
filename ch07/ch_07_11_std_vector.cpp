//ch_07_11_std_vector.cpp

#include <iostream>
#include <vector>

using namespace std;

void	printStack(std::vector<int> v)
{
	for (auto &e : v)
		cout << e << " ";
	cout << endl;
	// cout << v.size() << " " << v.capacity() << endl;
}

int main()
{
	// #2 stack
	std::vector<int> stack;
	// 새로 reserve한
	// stack.reserve(1024);

	stack.push_back(3);
	printStack(stack);
	stack.push_back(5);
	printStack(stack);
	stack.push_back(7);
	printStack(stack);




	// # 1
	// std::vector<int> v {1,2,3};

	// // size, capacity
	// // 실제 코드 내부는 capacity만큼 메모리를가지고 있다.
	// // size는 실제 사용
	// for (auto &e : v)
	// 	cout << e << " ";
	// cout << endl;
	// cout << v.size() << " " << v.capacity() << endl;

	// v.resize(10);

	// for (auto &e : v)
	// 	cout << e << " ";
	// cout << endl;
	// cout << v.size() << " " << v.capacity() << endl;

	// v.resize(2);

	// for (auto &e : v)
	// 	cout << e << " ";
	// cout << endl;
	// cout << v.size() << " " << v.capacity() << endl;

	return (0);
}