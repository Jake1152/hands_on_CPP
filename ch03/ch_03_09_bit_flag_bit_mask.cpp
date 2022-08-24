// ch_03_09_bit_flag_bit_mask.cpp

#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	/*
		비트단위 연산이 어떻게 이루어지는지 알수있다.
	*/    

	// bool item1_flag = false;
	// bool item2_flag = false;
	// bool item3_flag = false;
	// bool item4_flag = false;

	// event!
//    unsigned char    items_flag = 0;
   // bool 8개가 아니라 unsigned char 1개로 처리한다.
   // 대신 각 비트에 대해 flag로 처리해야한다.

	// const unsigned char opt0 = 1 << 0;
	// const unsigned char opt1 = 1 << 1;
	// const unsigned char opt2 = 1 << 2;
	// const unsigned char opt3 = 1 << 3;
	// // opt 4,5,6,7

	// cout << bitset<8>(opt0) << endl;
	// cout << bitset<8>(opt1) << endl;
	// cout << bitset<8>(opt2) << endl;
	// cout << bitset<8>(opt3) << endl;

	// unsigned char items_flag = 0;
	// cout << "No item " << bitset<8>(items_flag) << endl;

	// // item0 on
	// items_flag |= opt0;
	// cout << "Item0 obtained " << bitset<8>(items_flag) << endl;

	// items_flag |= opt3;
	// cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

	// // has item1? 아주 짧은 코드는 아래처럼 한줄안에 조건문과 결과를 같이 넣기도 한다.
	// if (items_flag & opt1) { cout << "Has item1" << endl; }

	// if (items_flag & opt0) { cout << "Has item0" << endl; }

	// // obtain item 2, 3, bitwise OR연산을 하면 더해져있으니까 둘다 켜져있는지 확인할 수 있다.
	// items_flag |= (opt2 | opt3);

	// cout << bitset<8>(opt2 | opt3) << endl;
	// cout << "Item0, Item1 obtained " << bitset<8>(items_flag) << endl;

	// // event 발생, item2를 가지고 있고, item1을 가지고 있지 않을 경우
	// // item2는 잃게하고 item1을 갖게한다.
	// // 상태 반전에는 XOR를 사용한다. 왜 그렇게 동작하는가?
	// if ((items_flag & opt2) && !(items_flag & opt1))
	// {
	// 	// items_flag ^= opt2;
	// 	// items_flag ^= opt1;
	// 	// items_flag ^= (opt1 | opt2);
	// 	items_flag ^= opt1 | opt2;
	// 	items_flag ^= opt1 | opt2;
	// 	// items_flag ^= ;
	// 	cout << "Item2 lost, Item1 obtained " << bitset<8>(items_flag) << endl;
	// }

	// 16진수 초기화, 그다음 shift operator
	// bit flag 어떻게 쓰이는가?
	// CG
	// glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	// 이런것들을 굉장히 많이 한다.
	// 가끔 안쓸때도 있다.
	// 하나만 넣고 싶을떄도 있다.
	// 다른 타입을 다 넣는건 부담된다.
	// 방지하고 싶을떄는 비트 플레그를 쓸 수 있다.
	// 비슷한 방식으로 응용해서 할수 있다.

	// FF 256
	// RGB 3바이트로 처리를 많이한다.
	// 입력이 16진수에 RGB가 함께있을때

	const unsigned int	red_mask = 0xFF0000;
	const unsigned int	green_mask = 0x00FF00;
	const unsigned int	blue_mask = 0x0000FF;

	cout << std::bitset<32>(red_mask) << endl;
	cout << std::bitset<32>(green_mask) << endl;
	cout << std::bitset<32>(blue_mask) << endl;
	unsigned int	pixel_color = 0xDAA520;

	unsigned char	red, green, blue;
	// DA : red, A5 : green, 20: blue

	cout << std::bitset<32>(pixel_color) << endl;

	red = (pixel_color & red_mask) >> 16;
	green = (pixel_color & green_mask) >> 8;
	blue = pixel_color & blue_mask;

	// red, green은 char범위가 넘어가 있어서 마스킹이 안된다.
	// 이를 해결하기 위해 shift한다.
	cout << "red color : " << std::bitset<8>(red) << " " << int(red) << endl;
	cout << "green color : " << std::bitset<8>(green) << " " << int(green) << endl;
	cout << "blue color : " << std::bitset<8>(blue) << " " << int(blue) << endl;

	return (0);
}