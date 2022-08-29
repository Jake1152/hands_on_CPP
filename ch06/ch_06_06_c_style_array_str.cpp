// ch_06_06_c_style_array_str.cpp

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // char    my_str[] = "string";

    // for (int i = 0; i < 7; i++)
    // {
    //     cout << (int)my_str[i] << endl;

    // }
    // cout << sizeof(my_str) / sizeof(my_str[0]) << endl;

    // char    my_str[255];
    // cin >> my_str;

    // my_str[0] = 'A';
    // my_str[4] = '\0';

    // char    my_str[255];

    // cin.getline(my_str, 255);

    // // cout << my_str <<endl;

    // int idx = 0;
    // while (true)
    // {
    //     if (my_str[idx] == '\0')
    //         break ;
    //     cout << my_str[idx] << " " << (int)my_str[idx] << endl;
    //     idx++;
    // }

    char    source[] = "Copy this!";
    char    dest[50];
    strcpy(dest, source);
 
    cout << source << endl;
    cout << dest << endl;

    // strcat() 이어붙임
    // strcmp() 비교

    strcat(dest, source);
    cout << source << endl;
    cout << dest << endl;

    cout << strcmp(source, dest) << endl;
    // 같으면 0, 같지않으면 다른 값
    if (strcmp(source, dest) == 0)
    {
        ;   
    }

    // std::string 대체로 이것씀
    return (0);
}
