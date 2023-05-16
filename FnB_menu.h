#ifndef FNB_MENU_H
#define FNB_MENU_H
#include <string>

class FnB_menu:{
    protected:
    string name;
    int stock;
    int price;
    public:
    string get_name();
    int get_price();
    int get_stock();
    int prepare_food(int x);//update stock every time a food item is ordered
    bool change_stock(); //ensures the ordered food is in stock and the stock is not negative
    virtual int get_nutrition_info();
};
#endif