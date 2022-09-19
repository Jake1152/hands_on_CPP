#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void    last()
{
    cout << "last" << endl;
    cout << "Throws exception" << endl;

    throw - 1;
    cout << "End last" << endl;
}

void    third()
{
    throw();
    cout << "third" << endl;

    try
    {
        last();
    }
    catch (int)
    {
        cerr << "third caught int exception" << endl;
    }
    catch (...) // catch all handlers
    {
        cerr << "ellipses" << endl;
    }

     cout << "End third" << endl;
}

void    second()
{
    throw();
    cout << "second" << endl;

    try
    {
        second();
    }
    catch (int)
    {
        cerr << "second caught int exception" << endl;
    }

     cout << "End second" << endl;
}

void    first()
{
    throw();
    cout << "first" << endl;

    try
    {
        second();
    }
    catch (int)
    {
        cerr << "frist caught int exception" << endl;
    }

    cout << "End first" << endl;
    
}

int main()
{
    //try, catch, throw
    cout << "strat" << endl;

    try
    {
        // if (x < 0.0)
        // something happend
        first();
    }
    // catch (std::string error_message)
    catch (int)
    {
        // do something to respond
        std::cerr << "main caugth int exception" << endl;
    }
    return (0);
}
