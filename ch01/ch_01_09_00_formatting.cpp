// ch_01_09_00_formatting.cpp

#include <iostream>

using namespace std;


// 다양한 스타일들
// 같이 합의를 봐서 한다.
// python의 경우 indenting이 중요
// 가독성을 위해 적절한 indenting이 필요하다.
int add(int x, int y){ return x + y; } 
int add(int x, int y){
	return x + y; 
} 

int add(int x, int y)
{
	return x + y; 
} 

int main()
{
	int my_v = 1;
	int x = 4;
	int num_apples = 123;

	int my_v		= 1;
	int x			= 4;
	int num_apples	= 123;

	// this is important
	int x = 1 + 2;
	// 한줄 띄움
	// thist is important too
	int x = 3 + 4;
	cout << "Hello, World" << "abcdef " << 
		"Hello Home " << endl;
	// 정신적 에너지를 덜 소모하는게 더 나은것에 집중할 수 있게해준다.
	return (0);
}