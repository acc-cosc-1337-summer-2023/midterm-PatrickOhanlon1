#include "question4.h"

int main()
{
    string input;
    char choice;
    do
    {
        cout << "Enter a string: ";
        cin >> input;
        if (is_palindrome(input))
        {
            cout << input << " is a palindrome." << endl;
        }
        else
        {
            cout << input << " is not a palindrome." << endl;
        }
        cout << "Do you want to check another string? (y/n) ";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');
    return 0;
}