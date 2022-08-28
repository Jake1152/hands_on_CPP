// ch_05_06_do_while.cpp

#include <iostream>

using namespace std;

int main()
{
    int selection;  // must be declared outside do/while loop

    do 
    {
        cout << "1. add" << endl;
        cout << "2. sub" << endl;
        cout << "3. mul" << endl;
        cout << "4. duv" << endl;
        cin >> selection;
    }   while (selection <= 0 || selection >= 5);
    // do while 이후에 ';'필수이다.

    cout << "You selected " << selection << endl;
}
