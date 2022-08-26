// ch_04_10_struct.cpp

#include <iostream>
#include <string>

using namespace std;


struct	Employee	// 2 + 4 + 8 => 14
{
	short	id;		// 2 byte
	int		age;	// 4 byte
	double	wage;	// 8 byte
};

// struct Person
// {
// 	double  height; // double   height[100]
// 	float   weight; // float    height[100]
// 	int     age;
// 	string  name;

// 	void    print()
// 	{
// 		cout << age << endl;
// 		cout << name << endl;
// 		cout << height << endl;
// 		cout << weight << endl;
// 	}
// };



// 기본값으로 넣어준다.
struct Person
{
    double  height = 3.0;
    float   weight = 70.0;
    int     age = 42;
    string  name = "Jake";
};

// 사람에 대한 표현
// 그리고 여러사람에 대해 표현한다면?
// void    printPerson(double height, float weight, int age, string name...)
// {
//     ;
// }
// void    printPerson(Person person)
// {
// 	cout << person.age << endl;
// 	cout << person.name << endl;
// 	cout << person.height << endl;
// 	cout << person.weight << endl;
// }

struct	Family
{
	Person me, mom, dad;
};

Person	getMe()
{
	Person	me{2.0, 100.0, 20, "Jake"};

	return (me);
}

int main()
{
	// 사람이라고 쳤을떄
	// double  height; // double   height[100]
	// float   weight; // float    height[100]
	// int     age;
	// string  name;
	// enum을 쓸수도 있다.
	// 다양한 요소들을 표현할 수 있다.
	// 2가지를 생각해볼수 있다. 사람에 대해서 출력
	// 이러한 요소를 매번 구현하는건 어렵다.
	// 여러사람을 표현한다면?
	// 각 요소를 배열로 할수 있지만 여전히 여러가지를 다루어야한다.

	/*
		me.age = 20;
		me.name = "Jack Jack";
		me.height = 2.0;
		me.weight = 100.0;
		uniform initialization을 쓸수있다.
	*/
	// Person	me{2.0, 100.0, 20, "Jake"};
	// Person	me2(me);
	// Person	ret_me;
	// // printPerson(me);
	// ret_me = getMe();
	// ret_me.print();
	// me.print();
	// Person	me;
	// Person	me{2.0, 100.0, 20, "Jakeeeee"};
	// cout << me.name << endl;

	Employee	worker;

	cout << "sizeof(Employee)" << sizeof(Employee) << endl;
	cout << "sizeof(worker)" << sizeof(worker) << endl;

	// cout << person
	return (0);
}