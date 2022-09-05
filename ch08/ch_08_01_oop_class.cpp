// ch_08_01_oop_class.cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Frined : name, address, age, height, weight, ...
// data와 기능이 묶여 있는 것을 object라고 부른다. (개념적)
// object가 구현되어있는 것이 class이다.
class	Friend
{
public:	// access specifier (public, pribate, protected)
	// member variable임을 명시하기 위해 m_를 관례적으로 변수 앞에 붙인다.
	// _를 앞에 붙이거나 변수명 마지막에 _를 붙인다.
	string	m_name;
	string	m_address;
	int		m_age;
	double	m_height;
	double	m_weight;

	void	print()
	{
		cout << m_name << " " << m_address << " " << m_age << " " << m_height << " "\
		<< m_weight << endl;
	}
};
/*

g++
*/



// member
// data와 기능이 묶여 있는 것을 object라고 한다.
// 단순한 기능만할때는 struct를 쓴다.
// 기능이 들어갈 때는 class로 선언한다.
// c에서는 구조체 안에 기능이 못들어간다.
/*
*/

/*
// 이름이 같은 struct, class는 허용되지 않는다
struct	Friend
{
	string	name;
	string	address;
	int		age;
	double	height;
	double	weight;

	void	print()
	{
		cout << name << " " << address << age << " " << height << " "\
		<< weight << endl;
	}
};
*/

void    print(const string &name, const string &address, const int &age,
				const double &height, const double weight)
{
	cout << name << " " << address << age << " " << height << " "\
	<< weight << endl;
}

void	print(const Friend &fr)
{
	cout << fr.name << " " << fr.address << fr.age << " " << fr.height << " "\
	<< fr.weight << endl;
}

// void	print_freindes()
// {
// 	;
// }

int main()
{
	// # 2 struct version

	// 사용자 정의 자료형처럼 쓰고 있다.
	// 변수처럼 이름을 선언해야 쓸 수 있다.
	// 실제 메모리를 차지 할 수 있도록 정의하는 것을 instanciation
	// 변수를 표현하고자하는 object 혹은 object를 구현하기 위해 만든 class의 instance
	Friend	jj = {"jake", "uptown", 2, 30, 10};
	print(jj.name, jj.address, jj.age, jj.height, jj.weight);
	print(jj);
	jj.print(); // jj라는 존재가 print하는 것처럼 보인다. 사람이 이해하고 설계하기 쉽다.

	// typing을 이상하게 많이할수록 오류가 나기 쉽다.

	vector<Friend>	my_friends;
	my_friends.resize(2);

	// my_friends[0].print();
	// my_friends[1].print();
	// my_friends[2].print();
	// my_friends = { \
	// 	{"jake", "uptown", 2, 30, 10}, \
	// 	{"jason", "downtown", 42, 130, 10333} \
	// };

	for (Friend &ele : my_friends)
		ele.print();

	// string	name;
	// string	address;
	// int		age;
	// double	height;
	// double	weight;

	// // 여러 명을 저장한다고 할떄 array, 동적할당 배열이 필요
	// vector<string>  name_vec;
	// vector<string>	addr_vec;
	// vector<int>		age_vec;
	// vector<double>	height_vec;
	// vector<double>	weight_vec;

	// print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);

	// data들을 묶어서 하나의 의미를 만든다. stucture
	return (0);
}