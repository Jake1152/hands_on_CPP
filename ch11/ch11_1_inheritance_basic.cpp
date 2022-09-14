#include <iostream>

using namespace std;

// 상속의 문법적인 측면에 대해 설명한다.
/*
- 객체지향 상속 (inheritance)
  - 사회에서의 상속과 다르다.
    - 부모클래스가 사라지지 않는다.
  - 내가 가진것을 전해줌
    - fork()와의 차이점
    - 프로세스가 아니고 
    - 상속받은곳에서 바꾼게 부모에도 적용되는가? 아니다.
    아닐것이다.
  
- 생성자 문법 더 신경써야
-
*/
class Mother {

// private는 자식에서도 못쓴다. protected를 쓰면 자식에서도 쓸수 있다.
private:
  int m_i;
// public:
//   int m_i;
public:
  Mother(const int & i_in = 42)
  	: m_i(i_in)
  {
  	cout << "Mother constructor" << endl;
  }
public:
  void setValue(const int &i_in)
  {
    m_i = i_in;
  }

  int getValue()
  {
    return m_i;
  }
};

// 아무것도 안들어있다
// encapsulation유지 가능
// private, protected 가급적 private로 다른곳에서 침범 못하게 한다. 나중에 유지보수할때 자손 클래스 확인 안해도 되어서 좋다.
class Child : public Mother
{
private:
  double m_d;

public:

  // 부모로부터 받은 멤버변수와 자식의 멤버변수를 함께쓰기 위해서 보통 생성자를 많이 쓴다고한다.
  Child(const int & i_in = 12, const double & d_in = 3.14)
    // : m_i(i_in), m_d(d_in) // m_i 부모의 멤버변수라 안됨
    // public, protected를 써도 안됨
    // 생성자는 메모리가 할당될때 초기화를 이렇게 해달라는 의미
    // : m_i는(i_in) 할당된 상황이 아니라서 문제이다.
  {
    // 아래처럼 하면 부모의 멤버변수를 메모리에 생성 및 할당한 다음이라 가능핟.
    // 부모클래스에 생성자가 있었다면 생성자 초기화로 가능헀을 것이다.
    Mother::setValue(i_in);
    m_d = d_in;
  }
  void  setValue(const int & i_in, const double & d_in)
  {
    // i_in을 Mother class에 있는 i_in에 대입해준다.
    // m_i = i_in;
    // private이거나 명시적으로 가져올때 위와 같이 할 수 있다.
    Mother::setValue(i_in);
  }
  void setValue(const double & d_in)
  {
    m_d = d_in;
  }

  double  getValue()
  {
    return m_d;
  }

  double  getValue(int)
  {
    return Mother::getValue();
  }
};

// 유전되는 것과 비슷하다 생각, 
// derived class 상속받은 클래스
// 컴퓨터 소프트웨어 관점에서 부모 클래스는 일반화된 클래스라고도 한다.
// 공통 요소를 묶어서 부모 클래스를 만든다.
// 원 취지 여러 클래스가 있고 일반화된 요소를 뽑는다.
class Daughter : public Mother
{
  
};

class Son : public Mother
{
  
};

int main() 
{
  Mother mother;
  mother.setValue(1024);
  cout << mother.getValue() << endl;

  Child	child;
  child.Mother::setValue(442);
  child.setValue(256);
  cout << child.getValue() << endl;
  cout << child.Mother::getValue() << endl;

  // #1
  // Mother mother;
  // mother.setValue(1024);
  // cout << mother.getValue() << endl;

  // Child	child;
  // child.setValue(512);
  // // void  setValue(const int & i_in, const double & d_in)
  // cout << child.getValue() << endl;

  // child.setValue(42, 0.0);
  // cout << child.getValue() << endl;
  // cout << child.getValue(2) << endl;

  return (0);
}
