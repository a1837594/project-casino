#ifndef DRINK_H
#define DRINK_H
#include <string>
#include "FnB_menu.h"
using namespace std;
class Drink: public FnB_menu{
    private:
    int  alcohol_percentage;
    public:
    int get_nutrition_info() override; //returns number of alcohol percentage
};
#endif