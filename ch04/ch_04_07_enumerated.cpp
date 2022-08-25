// ch_04_07_enumerated.cpp


#include <iostream>
#include <typeinfo>


/*
    - 숫자로만 표현하면 읽을떄 헷갈리기 수비다.
*/

enum Color
{
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_SKYBLUE,
    BLUE,
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
    Color appe{COLOR_GREEN};
    return (0);
}