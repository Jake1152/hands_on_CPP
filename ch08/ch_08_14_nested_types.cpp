// ch_08_14_nested_types.cpp

#include <iostream>


// 여러클래스가 공통적으로 사용하는 경우 header만들어서 따로 뺴는게 좋지만
// 특정 클래스만 쓰는 경우 클래스 안에서 정의해서 쓰는것도 괜찮은 방법이다.
class Fruit
{
public: // 예제라서 public
    enum    FruitType
    {
        APPLE,
        BNANNA,
        CHEERY,
    };

    class   InnerClass // struct 안에 struct같은 느낌
    {
        
    };

private:
    FruitType   m_type;
public:
    Fruit(FruitType type) : m_type(type)
    {}

    FruitType getType() { return m_type; }
};

int main()
{
    Fruit   apple(Fruit::APPLE);

    if (apple.getType() == Fruit::APPLE)
    {
        std::cout << "Apple" << std::endl;
    }

    return (0);
}