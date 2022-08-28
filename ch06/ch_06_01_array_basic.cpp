// ch_06_01_array_basic.cpp

#include <iostream>

using namespace std;


struct Rectanlge
{
	int	length;
	int width;
};


// 사람 이름의 enum은 권장하지 않는다.
enum	StudentName
{
	JAKE,
	DASH,
	IU,
	NUM_STUDENTS,
};

int main()
{

	/*
	{		
		int one_student_score;  // 1 varaiable
		int student_scores[5];  // 5 int

		one_student_score = 100;

		student_scores[0] = 100;    // 1st element
		student_scores[1] = 80;     // 2st element
		student_scores[2] = 90;     // 3st element
		student_scores[3] = 50;     // 4st element
		student_scores[4] = 0;		// 5st element
		// student_scores[5] = 42;		// 6st element

		cout << student_scores[0] << endl;
		cout << student_scores[1] << endl;
		cout << student_scores[2] << endl;
		cout << student_scores[3] << endl;
		cout << student_scores[4] << endl;
		// cout << student_scores[5] << endl;
		// cout << student_scores[6] << endl;;		// 6st element
		// cout << sizeof(one_student_score) << endl;
		// cout << sizeof(student_scores) << endl;

		cout << student_scores[0] + student_scores[1] << endl;
	}
	*/

	/*
		Rectanlge rect_arr[10];

		// padding이 있어서 각각의 멤버변수 사이즈의 합보다 구조체의 사이즈가 클 수 있다.
		cout << sizeof(Rectanlge) << endl;
		cout << sizeof(rect_arr) << endl;

		rect_arr[0].length = 1;
		rect_arr[0].width = 2;
	*/

	/*
	// array init
	// int my_array[5] = {1,2,3,4,5};
	int my_array[5]{1,2,3,42,5};// like uniform initalize
	
	cout << my_array[0] << endl;
	cout << my_array[1] << endl;
	cout << my_array[2] << endl;
	cout << my_array[3] << endl;
	cout << my_array[4] << endl;

	*/
	// enum과 섞어서 쓸 수 있다.
	// int my_array[]{1,2,3,42,5};// like uniform initalize
	
	// cout << my_array[JAKE] << endl;
	// cout << my_array[DASH] << endl;
	// cout << my_array[IU] << endl;
	// cout << my_array[3] << endl;
	// cout << my_array[4] << endl;
	// int my_array[NUM_STUDENTS];

	// my_array[JAKE] = 42;
	// cout << my_array[JAKE] << endl;

	int num_students = 0;
	cin >> num_students;
	// cin으로 받는 값은 runtime에 결정된다.


	// array size를 정하는 것은 compile time에 결정된다.
	// 이런부분에서 괴리감이 발생한다.
	int	students_scores[num_students];

	cout << sizeof(students_scores) << endl;

	return (0);
}