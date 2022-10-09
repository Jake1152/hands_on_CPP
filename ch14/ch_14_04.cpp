#include <iostream>
#include <exception>


// 표준라이브러리
// 모두 적절한 경우에 그에 맞는예외를 발생하도록 구현되어있다.
// 예외처리할때 보다 편하게 할 수 있다.

class CustomException : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return "Custom exception";
    }
};


int main()
{
    try
    {
        // std::string s;
        // s.resize(-1);
        throw CustomException();
    }
    catch (const std::exception & exception)
    {
        // 
        std::cout << typeid(exception).name() << std::endl;
        std::cerr << exception.what() << std::endl;
    }
    return (0);
}