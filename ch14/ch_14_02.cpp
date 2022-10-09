#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// void last() throw(int)

void    last() throw(int)
{
    cout << "Last" << endl;
    cout << "Throws exception" << endl;

    throw 'a';

    cout << "End Last" << endl;
}

void    third()
{
    cout << "Third" << endl;

    last();
    cout << "End Third" << endl;
}

void    second()
{
    cout << "Secod" << endl;

    try
    {
        third();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    cout << "End secod" << endl;
}

void    first()
{
    cout << "First" << endl;

    try
    {
        second();
    }
    catch(double)
    {
        std::cerr << "First caught double exception" << '\n';
    }
    cout << "End first" << endl;
}

int main()
{
    //try, catch, throw
    cout << "Strat" << endl;

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
    catch (...)
    {
        cerr << "... case" << endl;
    }
    return (0);
}
