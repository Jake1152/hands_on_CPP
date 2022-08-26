// ch_04_08_scoped_Enumerations.cpp

#include <iostream>

// enum class도 있지만 보통 struct를 더 많이 쓴다.
using namespace std;


int main(void)
{


    // enum Color
    enum class Color
    {
        RED,
        BLUE,
    };

    enum class Fruit
    {
        TOMATOES,
        APPLES,
        WATER_MELON,
        MANGO,
        PEACH,
        MANDARIN,
    };

    Color color1 = Color::RED;
    Color color2 = Color::RED;
    // Fruit fruit = Fruit::TOMATOES;
    if (color1 == color2)
        cout << "Color1, color2 are same?" << endl;
    return (0);
}
