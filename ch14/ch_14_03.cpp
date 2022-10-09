#include <iostream>

// 사용자 정의 자료형
// 예외클래스 상속 쓸때 주의사항

//

class Exception
{
public:
    void    report()
    {
        std::cerr << "Exception report" << std::endl;
    }
};

class ArrayException : public Exception
{
public:
    void    report()
    {
        std::cerr << "ArrayException report" << std::endl;
    }
};

class   MyArray
{
private:
    int _data[5];

public:
    int& operator [] (const int& idx)
    {
        // if (idx < 0 || idx >= 5) throw - 1;
        // if (idx < 0 || idx >= 5) throw Exception();
        if (idx < 0 || idx >= 5) throw ArrayException();
        // 자녀한테로 안감 부모것로감 
        return _data[idx];
    }
};

void    doSomething()
{
    MyArray my_array;

    try
    {
        my_array[100];
    }
    catch(const int& x)
    {
        std::cerr << "Exception " << x << std::endl;
    }
    // catch (ArrayException& e)
    // {
    //     std::cout << "doSomething()" << std::endl;
    //     e.report();
    //     throw e;
    //     // re-wind 되어서 다시 main에서부터 시작한다.
    //     // 모든 것을 다 처리한다 치면 
    //     // 부모에서 모든걸 받고 자녀에서 상세한 내용을 줄 수 있따.
    // }
    catch (Exception & e)
    {
        std::cout << "doSomething()" << std::endl;
        e.report();
        // throw e;
        throw; // 객체 잘림 없이 원래의 Array Exception으로 받는다.
    }
}

int main()
{
    try 
    {
        doSomething();
    }
    catch (ArrayException& e)
    {
        std::cout << "main()" << std::endl;
        e.report();
    }
    catch (Exception& e)
    {
        std::cout << "main()" << std::endl;
        e.report();
    }
    
    return (0);
}
