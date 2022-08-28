// ch_05_03_switch_case.cpp

#include <iostream>

using namespace std;

enum class Colors
{
    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE,
};

// void    printColorName(Colors color)
// {
//     // if (color == Colors::BLACK)
//     //     cout << "Black" << endl;
//     // else if (color == Colors::WHITE)
//     //     cout << "White" << endl;
//     // else if (color == Colors::RED)
//     //     cout << "RED" << endl;
//     // ...
//     ;
// }

int main()
{
    // int x;

    // cin >> x;

    // switch (x)
    // {
    //     case 0:
    //         cout << "Zero";
    //     case 1:
    //         cout << "One";
    //     case 2:
    //         cout << "Two";
    //     case 3:
    //         cout << "Three";
    //     cout << endl;
    // }
    // int x;

    // cin >> x;

    // int y = 0; // 아래 경우에 모두 쓰인다면 직전에 선언하고 초기화한다.
    // switch (x)
    // {
    //     case 0:
    //         break ;
    //     case 1:
    //         y = 5;
    //         cout << y << endl;
    // }
    
    int x;

    cin >> x;
    int y = 0; // 아래 경우에 모두 쓰인다면 직전에 선언하고 초기화한다.
    switch (x)
    {
        case 0:
        {
            int y= 5;
            y = y + x;
            cout << y << endl;
            break ;
        }
        case 1:
        {
            int y= 5;
            y = y - y;
            cout << y << endl;
            break ;
        }

        default:
            cout << "undefined input " << x << endl;
            break ; // break가 없으면 밑에 케이스를 다 실행된다.
            // 보통 default는 마지막에 넣어서 break가 없지만 일관적으로 놓치지 않고 코딩하기 위해
            // break 넣기도한다. (위에 break 빠지면 안될부분에 넣을수도 있기에!)
    }



    return (0);
}