// ch_05_10_std_cin.cpp

#include <iostream>

using namespace std;

int get_int()
{
    int x;
    while (true)
    {
        cout << "Enter a interger number : ";
        cin >> x;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32727, '\n');
            cout << "Invalild number, please try again" << endl;
        }
        else
        {
            std::cin.ignore(32767, '\n');
            break ;
        }
    }
    return (x);
}

char    get_operator()
{
    char    op;
    while (true)
    {
        cout << "Enter an operator (+, -) : "; //TODO: more operators *, / etc.
    
        cin >> op;
        std::cin.ignore(32767, '\n');
        if (op == '+' || op == '-')
            break ;
        else
            cout << "Invalid operator, please try again" << endl;
    }
    return (op);
}

void    print_result(int x, char op, int y)
{
    if (op == '+')
        cout << x + y << endl;
    else if (op == '-')
        cout << x - y << endl;
    else if (op == '*')
        cout << x * y << endl;
    else if (op == '/')
        cout << x / y << endl;
    else if (op == '%')
        cout << x % y << endl;
    else
        cout << "unknown operator" << endl;
}

int main()
{
    int     x = get_int();
    char    op = get_operator();
    int     y = get_int();

    print_result(x, op, y);
    return (0);
}