// ch_07_12_recursive_function_call.cpp

#include <iostream>

using namespace std;

// 숫자를 1개씩 내려가면서 짜는 함수
/*
	- 자신이 자신을 부른다.
	- 함수는 프로그램에 저장되어있다.
	재귀호출
	- 본체는 따로있고 잠깐 잠깐 실행하는 형태
		- 함수도 주소
	- 같은 코드를 따로 따로 실행한다.
	- 함수 호출
*/
void    countDown(int count)
{
	if (count < 0)
		return ;
	cout << count << endl;
	countDown(count - 1);
}

int main()
{
	countDown(5);

	return (0);
}
