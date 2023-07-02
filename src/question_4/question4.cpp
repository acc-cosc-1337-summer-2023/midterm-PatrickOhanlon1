#include "question4.h"

bool test_config()
{
    return true;
}

bool is_palindrome(string const str)
{
    string backwards = str;
    reverse(backwards.begin(),backwards.end());
    return str == backwards;
}