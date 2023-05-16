#include<iostream>
#include<string>
#include "FnB_menu.h"
using namespace std;

string FnB_menu::get_name(){
    return name;
};
int FnB_menu::get_price(){
    return price;
};

int FnB_menu::get_stock(){
    return stock;
};

int FnB_menu::prepare_food(int x){//update stock every time a food item is ordered
    int stock=get_stock();
    stock+=x;
    return stock;
};

bool FnB_menu::change_stock(){//if stocks>0,return true
    return get_stock()>0;
};

int FnB_menu::get_nutrition_info(){
    return 0;
};
