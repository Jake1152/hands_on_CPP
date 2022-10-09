#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    // try, catch, throw
    double  x;
    cin >> x;
    
    try
    {
        // 예외처리는 형변환을 엄격하게한다.
        // if (x < 0.0) throw ("Negative input");
        // throw "char *";
        throw std::string("string");
        // throw -1;
        // cout << std::sqrt(x) << endl;
    }
    catch (int x)
    {
        cout << "x is " << x << " int, not a double" << endl;
    }
    catch (double x)
    {
        cout << "x is " << x << " double" << endl;
    }
    catch (const char * error_message)
    {
        // do something to respond
        cout << error_message << endl;
    }
    catch (std::string error_message)
    {
        // do something to respond
        cout << error_message << endl;
    }
   
    return (0);
}
