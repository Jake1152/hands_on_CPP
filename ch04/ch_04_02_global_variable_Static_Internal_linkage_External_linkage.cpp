// ch_04_02_global_variable_Static_Internal_linkage_External_linkage.cpp

/*
	local variable이 가장 많이 쓰인다.
*/

#include <iostream>
#include "ch_04_02_global.hpp"

using namespace std;

/*
	static duration variable
*/
// static int g_a = 1;
// static을 넣으면 다른 파일에서는 쓸 수 없다.
// 다른 파일에서 쓰기 위해서는 extern을 써서 처리할 수 있다.



// 변수도 함수처럼 똑같이 extern 사용이 가능하다.
// forward declartion
// extern void	doSomething();
// extern int	a = 4242;	// 몸체는 어디가 있다는 의미이지만 실제로 linking할때는 몸체가 없어서 문제가 생긴다.
// 선언하고 할당은 안되어있어서 그렇다는거 같다.

// void    doSomething()
// {
	// int a = 1;
	// static int a = 1;

	// cout << a << endl;
	// static 단어 뜻
	// C언어 개발자 관점에서 봐야 이해가 쉽다.
	// 메모리가 정적으로 시작된다.
	// int a = 1;
	// compiler가 최적화해준다면
	// 메모를 반납했다 다시 실행했다 반복
	// static
	// 영역안에 같은 변수를 쓴다.
	// 초기화를 1번만 한다.
	// debuger 사용권장.
	// static integer
	// a = 1; // 이 대입은 반복하지 안흔ㄴ다.
	// 하지만 처음에 초기화는 반드시 들어가야 쓸 수 있다.
	// design pattern sigleton이 유사하게 동작한다.
	// unique ID, singleton예시, 객체지향에서 추가설명진행
	// ++a;

	// cout << a << endl;
// }

// int value = 123;

// void	doSomething();


/*

*/

int main()
{
	// int a = 10;
	// static int s_a = 1; // a변수를 다른곳에서 보기 어렵다.
	// ++g_a;
	// cout << value << endl;

	// int value = 1; // 범위는 블럭 안

	// cout << ::value << endl;
	// cout << value << endl;
	// doSomething();
	// doSomething();
	// doSomething();
	// doSomething();
	/*
		- 전역변수 이후에는 가급적 잘 안쓴다.
		- a라는 전역변수 바꾸는 값이 여러곳에 있다.
		- debugin이 어려워진다.
		- 대안, 명확하게 잘 보이게 설계를 잘한다.
		- global이름을 구분한다.
		- 좋은방법은 객체지향을 잘 이용 전역변수를 안쓴다.
	*/
	/*
		Linking, Linkage
		Linkage연결 그자체를 의미한다.
		local variable obj파일을 의미
		local vairable에 대해 서로 연결해줄 필요가 있는가?
		없다
		local variable은 linkage가 없다.
		global에도 static도 가능
		static int g_a = 1;
		- 다른 파일에서 접근못하게 막는다.
	*/
	cout << "in Main variable CPP\n" << Constants ::pi << endl;
	cout <<  &(Constants ::pi) << endl;
	
	doSomething();

	// 호출하는 곳마다 사본이 생기므로 파일이 많아질수록 비효율적이다. 어떻게 효율적으로
	// header에 있는 Constant값들을 쓰는가

	// 전역상수
	//
	return (0);
}