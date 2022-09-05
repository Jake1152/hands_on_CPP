// ch_06_11_memory_dynamic_allocation.cpp

#include <iostream>

using namespace std;

int main()
{
	// int array[1000]; // stack

	// OS int 1개 만큼 사이즈 달라는 방버
	// int	var;
	// int *ptr = new int;
	// var = 7;
	// *ptr = 7;
	
	// 포인터로 메모리 할당하면서 동시에 초기화도 가능하다.
	// int *ptr = new int (7);
	// int *ptr = new int { 7 };
	// 할당받은 메모리를 os에 돌려주는 것이 더욱 중요하다.
	// 메모리에 한번에 데이터가 안들어갈 수 있다.
	// 일부 데이터만 메모리에  올리고 나머지는 이후에 올린다.
	// 여러 프로세스에서 처리하는 경우 급한것부터 처리하게 하는 것이 효율적이다.
	// delete ptr;
	// os알아서 걷어가기전에 알아서 반납하겠다는 의미가 된다.

	// 오류가 나는 케이스

	// int	*ptr = new int (42);

	// cout << ptr << endl;
	// cout << *ptr << endl;

	// delete ptr;
	// ptr = nullptr;
	// // 알아서 반납
	// // free와 비슷한 듯

	// // 주소는 그대로 남아있다.
	// // 엉뚱한 값들이 나올 수 있다.
	// // smart pointer, 대부분의 경우 class를 이용해서 자동으로 처리할 수 있다.
	// // 장기적으로 고급프로그래밍할때 필요해서 설명함
	// // delete 이후에는 null, nullptr을 넣는다.
	// // nullptr
	// // 포인터가 가지고 있는 주소는 쓸모가 없다고 표현하는 것
	// cout << "After delete" << endl;
	// if (ptr != nullptr)
	// {
	// 	cout << ptr << endl;
	// 	cout << *ptr << endl;
	// }
	// else
	// {
	// 	cout << "ptr is nullptr" << endl;
	// }
	// smart pointer 쓰면됨.

	
	// ptr이 있는지 확인했기에 보다 안전하게 쓸수있다.

	// 메모리 할당받지 못하는 경우
	// 프로그램이 메모리를 쓸수없는 경우, 프로그램이 종료되게 할수도
	// 다른 프로그램이 메모리 반납하기 기달렸다가 현재 프로그램이 메모리 할당받게 기달려야하는 경우가 있을수도 있다.
	// 기달려야하는 경우 nothrow를 쓸 수 있다.
	// nothrow쓰면 오류를 발생시키지 않고 쭉 진행된다.
	// new가 실패하면 nothrow의 의해 nullptr이 대입된다고 한다.
	// int *ptr = new (std::nothrow) int {7};
	// if (ptr)
	// {
	// 	cout << ptr << endl;
	// 	cout << *ptr << endl;
	// }
	// else
	// {
	// 	cout << "Could not allocate memory" << endl;
	// }

	// 흔히 하는 실수
	// int	*ptr = new (std) 
	// int	*ptr = new (std::nothrow) int { 7 };
	// int	*ptr2  = ptr;

	// delete ptr;
	// ptr = nullptr;

	// *ptr2 dereferencing하면 문제 발생가능
	// *ptr2
	// ptr2= nullptr
	// 최근에는 smart pinter이용해서 처리

	// memory leak 메모리 누수 
	// 할당만하고 쓰지도 않는다. 이전에 할당한 메모리릐 주소를 잃어버려서 찾을수도 없게된다. 
	while (true)
	{
		int *ptr = new int;
		cout << ptr << endl;

		delete ptr;
	}
	return (0);
}

