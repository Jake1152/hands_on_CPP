#include <iostream>
#include <string>
#include <vector>
#include <sstream>

template <typename T>
std::string ToString(T x)
{
    std::ostringstream osstream;
    osstream << x;
    return osstream.str();
}

template <typename T>
bool FromString(const std::string & str, T &x)
{
    std::istringstream isstream(str);
    // string을 넣어서 초기화한다.
    // 
    return (isstream >> x) ? true : false;
}

int main()
{
    // #2
    // std::string my_str(ToString(3.141592);
    std::string my_str("Hello");
    // std::cout << my_str << std::endl;

    double d;


    if (FromString(my_str, d))
        std::cout << d << std::endl;
    else
        std::cout << "Cannot convert string to double" << std::endl;
    std::cout << my_str << std::endl;

    // #1
    // std::string my_str(std::to_string(1004));
    // // std::cout << my_str << std::endl;

    // // int i = std::stoi(my_str);
    // float f = std::stof(my_str);

    // std::cout << my_str << std::endl;
    // // std::cout << i << std::endl;
    // std::cout << f << std::endl;

    return (0);
}

