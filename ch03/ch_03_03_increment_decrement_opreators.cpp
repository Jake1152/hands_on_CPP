// ch_03_03_increment_decrement_opreators.cpp
#include <iostream>

int	add(int a, int b)
{
	return (a + b);
}

int main()
{
	using namespace std;

	// int x = 5;
	// int y = ++x; // 전위 증가연산
	// int z = x--; // 후위 감소연산

	// cout << y << endl;
	// cout << z << endl;

	// int x = 6, y = 6;
	// cout << x << " " << y << endl;
	// cout << x++ << " " << y-- << endl;
	// cout << x << " " << y << endl;
	// cout << x++ << " " << y-- << endl;
	// cout << x << " " << y << endl;
	// 헷갈릴 수 있지만 많이들 쓰므로 코드를 읽을 줄 알아야한다.
	// cout << x++ << " " << y-- << endl;

	// int x = 1;
	// // compiler의 따라 달라질 수 있다.
	// // 쓰지 않도록 한다. compiler dependency
	// int v = add(x, ++x);
	// int y = 1;
	// int w = add(y, y++);
	// // 예상 1 + 2 = 3
	// cout << v << endl;
	// cout << w << endl;

	int z = 1;
	z = z++;
	// 이러한 행동도 undefined이다. 컴파일러마다 다름
	// 결국 이런 방식을 지양한다.
	cout << z << endl;
	

	return (0);
}
