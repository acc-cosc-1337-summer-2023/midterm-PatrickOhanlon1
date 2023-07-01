#include "question2.h"
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string input;
    do 
    {
        cout << "Press y to get a number or anything else to quit" << endl;
        //cin >> input;
        getline(cin, input);
        for (char& c : input) 
        {
            c = tolower(c);
        }
        if (input  == "y")
        {
            cout << roll_die() << endl;
        }
    } while (input == "y");
    return 0;
}