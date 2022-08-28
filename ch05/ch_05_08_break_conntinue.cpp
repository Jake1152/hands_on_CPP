// ch_05_08_break_conntinue.cpp

#include <iostream>

using namespace std;

void    break_of_return()
{
    while (true)
    {
        char ch;
        cin >> ch;

        if (ch == 'b')
            break ;

        if (ch == 'r')
            return ;
    }
    cout << "Hola" << endl;
}

int main()
{
    // int count = 0;

    // while (true)
    // {
    //     cout << count << endl;
    //     if (count == 10)
    //         break ;
    //     return (0);
    // }
    // break_of_return();

    // for (int i = 0; i < 10; ++i)
    // {
    //     cout << i << endl;
    //     if (i == 5) break ;
    // }

    // for (int i = 0; i < 10; ++i)
    // {
    //     if (i % 2 == 0) continue ;

    //     cout << i << endl;
    // }

    // int count(5);

    // do
    // {
    //     if (count == 5)
    //         continue ;
    //     cout << count << endl;
    //     ++count;
    // } while (count < 10);
    // } while (++count < 10);

    int     count(0);
    while (true)
    {
        char    ch;
        cin >> ch;

        cout << ch << " " << count << endl;
        if (ch == 'x')
            break ;
        count++;
    }
    return (0);
}
