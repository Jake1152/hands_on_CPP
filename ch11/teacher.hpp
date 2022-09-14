#pragma once

#include <iostream>
#include <string>
#include "person.hpp"

// 공통부분을 묶어서 일반화한다.
class   Teacher : public Person
{
// private:
public:
    Teacher(const std::string & name_in = "No Name")
        : Person(name_in)
    {
        this->getName(); // 부모의 있는 것을 가져다 쓸수 있다.
    }

    void    teach()
    {
        std::cout << "teach " << std::endl;
    }
    
    friend std::ostream & operator << (std::ostream & out, const Teacher & teacher)
    {
        out << teacher.getName();
        return out;
    }
};
