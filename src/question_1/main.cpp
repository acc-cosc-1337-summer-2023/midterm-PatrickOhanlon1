#include "question1.h"

int main()
{
    int number;
    do 
    {
        cout << "Enter a number (1-512) or -1 to quit: ";
        cin >> number;
        if (number == -1) 
        {
            break;
        }
        if (number >= 1 && number < 513)
        {
            string hex_value = decimal_to_hex(number);
            cout << hex_value << endl;

        }
        else 
        {
            cout << "Invalid input.";
        }
        

    } while (true);
    return 0;
}