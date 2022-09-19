#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //try, catch, throw
    int x;
    cin >> x;

    try
    {
        // if (x < 0.0)
        // something happend
        throw x;
    }
    // catch (std::string error_message)
    catch (double x)
    {
        // do something to respond
        cout << "Cath double" << x << endl;
    }
    catch (int x)
    {
        // do something to respond
        cout << "Cath integer" << x << endl;
    }
    catch (const char * e_msg)
    {
        cout << e_msg << x << endl;
    }
    

    return (0);
}