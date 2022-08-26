// ch_04_07_enumerated.cpp
#include <iostream>
#include <typeinfo>
/*
	- 숫자로만 표현하면 읽을떄 헷갈리기 수비다.
*/

using namespace std;

// 마지막 ,는 프포그래머의 편의를 위해 마지막에 ,가 있어도 문제가 안생기게 되었다.
// 꼭 int라는 법은 없다. 최소한의 크기로 int가 되었을뿐이라고 한다.
enum Color
{
	COLOR_BLACK = -3,
	COLOR_RED,
	COLOR_BLUE = 5,
	COLOR_GREEN = 5,
	COLOR_SKYBLUE,
	// BLUE,
};

enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	BLUE,
};

// int computeDange(int waepon_id)
// {
//     if (weapon_id == 0) // sword
//         return 1;
//     if (weapon_id == 1) // gun
// }


int main()
{
	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{COLOR_GREEN};

	Color my_color;

	int	color_id = COLOR_RED;

	// Color my_color = 3; // 불가 enum을 쓸려고 헀으니까 int넣는건 안된다.
	// 단 cast는 가능하다.
	my_color = static_cast<Color>(3); // in
	cout << "color_id " << color_id << " " << endl;
	cout << "my_color " << my_color << " " << endl;

	string	str_input;

	std::getline(cin, str_input);
	// cin >> my_color; // cin으로 enum type 입력받기 불가능
	Color in_number;
	if (in_number == static_cast<Color>(0))
		my_color = COLOR_BLACK;
	// 문자열로하면 헷갈릴수 있다., 오류를 만든다.
	// 실제 게임에서 오류를 만들거나 성능을 저하한 사례가 있다.
	if (str_input  == "COLOR_BLACK"))
		my_color = static_cast<Color>(0);
	// ...

	my_color = COLOR_BLACK;
	cout << my_color << " " << endl;

	my_color = COLOR_GREEN;
	cout << my_color << " " << endl;

	my_color = COLOR_BLUE;
	cout << my_color << " " << endl;

	my_color = COLOR_SKYBLUE;
	cout << my_color << " " << endl;

	return (0);
}

