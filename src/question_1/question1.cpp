#include "question1.h"


bool test_config()
{
    return true;
}

string decimal_to_hex(int number)
{
    string hexString;
    const string hexDigits = "0123456789ABCDEF";

    while (number > 0) 
    {
        int remainder = number % 16;
        hexString = hexDigits[remainder] + hexString;
        number /= 16;
    }

    return hexString;
}
