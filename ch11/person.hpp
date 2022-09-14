#pragma once

#include <string>
#include <iostream>

class   Person
{
private:
    std::string m_name;

public:
    // Person()
    //     : m_name("No Name")
    // {}

    Person(const std::string & name_in = "No Name") 
        : m_name(name_in)
    {}

    void    setName(const std::string & name_in)
    {
        m_name = name_in;
    }

    // person에서만 수정하면 student teacher에서 생기던 문제가 동시에 수정된다.
    // 객체지향의 목적
    std::string     getName() const
    {
        return m_name;
    }

    // using namespace를 헤더에쓰면 헤더를 가져다 쓰는 것에 다 영향을 미치므로 
    // 이런 경우 아래의 함수는 cpp파일로 빼서 구현한다.
    void    doNothing() const
    {
        std::cout << m_name << " is doing nothing " << std::endl;
    }

};