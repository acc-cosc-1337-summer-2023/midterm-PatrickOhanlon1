#include "question3.h"

bool test_config()
{
    return true;
}

vector <double> get_cookie_ingredients(int cookies_to_bake)
{
    double sugar = 1.5/48;
    double butter = 1.0/48;
    double flour = 2.75/48;

    vector <double> ingredients;

    ingredients.push_back(sugar * cookies_to_bake);
    ingredients.push_back(butter * cookies_to_bake);
    ingredients.push_back(flour * cookies_to_bake);

    return ingredients;
}

