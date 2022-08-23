// ch_03_04_sizeof_comma_condination_operator.cpp

#include <iostream>

// move semantic compiler기법
// https://modoocode.com/228
int	getPrice(bool onSale);
{
	if (onSale)
		return 10;
	else
		return 100;
}

int main()
{
	using namespace std;

	// float a;

	// sizeof(float);
	// sizeof(a); // 정의 되어있는 변수라면 sizeof안에 넣을 수 있다.

	// class, structure
	// 자신만의 자료형을 만든다는 개념
	// 사용자가 만든 것에도 sizeof를 쓸 수 있다.
	// 직접적으로 메모리관리할떄도 유용하다.
	// sizeof()는 연산자.
	// 1. 표준에서 operator에서 정의했다.
	//     - 내부에서 컴파일러가 ㅌ처리하는건 다음의 문제
	// 2. 변수명일떄는 ()없이도 된다.
	//     e.g) sizeof a;
	//     - 데이터 타입일때는 안된다.
	// comma operator

	// int x = 3;
	// int y = 10;
	// // int z = (++x, ++y, 2, 4, 5, 42);

	// ++x;
	// ++y;
	// int z = y;
	// cout << x <<  " " << y << " " << z << endl;
	// 보통 헷갈리지 않게 여러줄에 나누어서 한다.
	// for()에서는 "," 연산자가 유용하게 쓰인다.

	int a = 1, b = 10; // 선언할때의 ","는 구분할떄 쓰는 의미이다. comma operator가 아니다.
	int c;

	// c = a, b;
	// = 대입연산이 comma 연산보다 빠르다. a가 할당된다.
	// 그러므로 원하는 결과를 위해 ()로 묶어준다.
	c = (++a, b++);
	cout << c << endl;

	// 가독성이 더 중요, for()에서 쓰이기에 알아는 두어야한다.


	// condition operator
	// condition 조건에 따라 무엇을 해라라는 의미가 될수 있어 애매
	// 삼항연산자
	// 항이 3개가 들어가는 유일한 연산자
	// 혹시 이후에 새로운 삼항 연산자가 추가될 수 있으니 외우지는 말고
	// 이해정도
	// conditional operator (arthmetric if)
	bool	onSale = true;

	// int	price;
	// const int price = (onSale == true)? price = 10 : price = 100;
	const int price = (onSale == true)? 10 : 100; // true이면 왼쪽, false이면 오른쪽
	// const를 초기화할때 유용하게 쓰인다.

	// if (onSale)
	// 	price = 10;
	// else
	// 	price = 100;
	cout << price << endl;
	// if 문을 써야겠으면 함수를 쪼갠다.
	const int price = getPrice(onSale);
	// 이전에는 함수호출 등 비용 때문에 부담이었지만
	// 함수 만들고 return등등
	// 이전에는 return도 비용이 들었지만 현재는 move semantic이라는게 있어서 최적화 해준다.
	// 간단한 경우 conditional operator로 해주는게 깔끔하다.
	// contional operator는 꽤 잘 쓰인다.
	// 그럼에도 if문으로 하는게 좋다.
	// 간단한 경우에만 contional operator 추천

	// 주의사항

	int x = 5;

	cout << ((x % 2 == 0) ? "even" : "odd") << endl;
	// 연산자 우선순위 때문에 ()로 묶어주어야한다.
	cout << ((x % 2 == 0) ? 0 : "odd") << endl;
	// 권장하지 않는다. 0: "odd"가 타입이 다르기 떄문!


	return (0);
}