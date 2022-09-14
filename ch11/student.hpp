#pragma once

#include <iostream>
#include <string>
#include "person.hpp"

// 공통부분을 묶어서 일반화한다.

class   Student : public Person
{
private:
    // std::string m_name; // Person에서 상속, 다른 곳(클래스 등)에서 건드리면 유지보수 힘듦, 그래서 private 권장!
    int         m_intel; // intelligence
    //  TODO add more members like address
public:
    // m_name을 사용할 수 있다.
    // 관리 책임을 깔끔하게 하기위해서
    // 생성자 이외에 중복되는 것들을 다 가져다 쓸 수 있다.
    // 생성자는 만들어야한다.
    // private같은 accessfier가 있는 경우 신경써야하지만 장기적으로 그러는 편이 유지보수에 더욱 좋다.
    Student(const std::string & name_in = "No Name", const int & intel_in = 0)
        // : m_name(name_in), m_intel(intel_in)
        : Person(name_in), m_intel(intel_in) 
    {
        ;
    }

    void    setIntel(const int & intel_in)
    {
        m_intel = intel_in;
    }

    int     getIntel()
    {
        return m_intel;
    }

    void    study()
    {
        std::cout << "study " << std::endl;
    }
    
    friend std::ostream & operator << (std::ostream & out, const Student & student)
    {
        out << student.getName() << " " << student.m_intel;
        return out;
    }
};
