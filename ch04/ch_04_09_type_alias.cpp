// ch_04_09_type_alias.cpp

#include <iostream>
#include <vector>
#include <cstdint> // 고정너비 정수

using namespace std;

int main()
{
	// 주석겸으로 쓰는 것으로 생각할 수 있다.
	// distance_t라는 별명(alias) 
	// 코드 유지관리에 도움된다.
	typedef double distance_t;
	// typedef float distance_t;


	std::int8_t	i(97); // 고정너비 정수도 typedef로 만들어 준것이다.

	double		my_distance;
	distance_t	home2work;
	// compiler 입장에서는 같은 double이다.
	// programming 편의를 위해서 사용
	// 이후에 type을 변경해줄때도 용이하다.
	// distance_t를 double에서 float를 변경하면 distance_t 타입을 쓰는 다른 변수에서도 
	// 한번에 바뀌 data type으로 사용할 수 있다.
	std::vector<std::pair<std::string, int> > pairlist;
	//코드가 긴 경우 줄이면 도움 된다.
	// ->
	vector<pair<string, int> > pairlist;
	// string 안에 자료구조가 pair로 있다.
	// 이런 복잡한 자료구조가 있을 수 있다는 의미
	// 타이핑을 하지는 않겠지만 불편할 수 있다.
	// 이름 
	typedef	vector<pair<string, int> > pairlist_t;

	pairlist_t	pairlist1;
	pairlist_t	pairlist2;
	// 의도
	//
	return (0);
}