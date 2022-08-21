#include <iostream>
#include <cstdio>

int main()
{
	using namespace std;

	int x = 1;

	cout << "Before Your input " << x << endl;
	cin >> x;
   // 입력받은 값을 어딘가에 저장한다는 의미이므로
   // 입력받을 변수를 미리 선언해야한다.
	cout << "Your input is " << x << endl;
	return 0;
}

