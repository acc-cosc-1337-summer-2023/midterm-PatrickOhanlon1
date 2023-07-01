#include "question3.h"
#include <iostream>

using namespace std;

int main()
{
    char quit;
    do 
    {
        int cookies;
        cout << "Enter the number of cookies: ";
        cin >> cookies;
        vector <double> recipe = get_cookie_ingredients(cookies);

        cout << "Cups of sugar: " << recipe[0] << " cups" << std::endl;
        cout << "Cups of Butter: " << recipe[1] << " cups" << std::endl;
        cout << "Cups of Flour: " << recipe[2] << " cups" << std::endl;

        cout << "Do you wish to quit or make more cookies? (y/n) ";
        cin >> quit;

    } while (quit != 'y' && quit != 'Y');

    return 0;
}