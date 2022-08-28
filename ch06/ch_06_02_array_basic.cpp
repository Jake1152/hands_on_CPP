// ch_06_02_array_basic.cpp

#include <iostream>

using namespace std;

// 문법상 포인터이다.
// 배열을 받을 떄 사용할것이다라는 의미로 볼 수 있따.
// 컴파일러에서 포인터로 처리도니다.
void    doSomething(int students_scores[20])
{
    cout << &students_scores << endl;
    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
    cout << " size in doSomething : " << sizeof(students_scores) << endl;
    // pointer의 사이즈이다.
}

int main()
{
    const int   nums_students = 20;
    // cin >> num_students;

    int students_scores[nums_students] = {1,2,3,4,5};

    cout << students_scores << endl;
    cout << &students_scores << endl;
    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;

    doSomething(students_scores);

    // cout << &students_scores << endl;
    // cout << &(students_scores[0]) << endl;
    // cout << &(students_scores[1]) << endl;
    // cout << &(students_scores[2]) << endl;
    // cout << &(students_scores[3]) << endl;

    // cout << sizeof(students_scores) << endl;



    return (0);
}
