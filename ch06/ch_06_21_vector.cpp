// ch_06_21_vector.cpp

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// std::array<int, 5> array;
	// std::vector<int> array;
	// std::vector<int> array2 = {1,2,3,4,5};

	// cout << array2.size() << endl;

	// std::vector<int> array3 = {1,2,3,};

	// cout << array3.size() << endl;

	// std::vector<int> array4 {1,2,3,}; // uniform init
	// cout << array4.size() << endl;

	// vector<int> arr = {1,2,3,4,5};
	
	// for (auto &itr : arr)
	// 	cout << itr << " ";
	// cout << endl;

	// // iterator편리 추후 설명
	// cout << array[1] << endl;
	// cout << arr.at(1) << endl;
	// vector는 메모리를 알아서 정리해준다.

	// 기존의 방식
	// int *my_arr = new int[5];
	// delete[] my_arr;

	//resize가능
	vector<int> arr = {1,2,3,4,5};
	for (auto &itr : arr)
		cout << itr << " ";
	cout << endl;

	arr.resize(2);

	for (auto &itr : arr)
		cout << itr << " ";
	cout << endl;


	return (0);
}