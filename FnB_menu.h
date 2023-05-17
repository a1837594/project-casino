#ifndef FNB_MENU_H
#define FNB_MENU_H
#include <string>
using namespace std;

class FnB_menu:{
    protected:
    std::string name;
    int stock;//quantity that are in store
    int price;
    public:
    FnB_menu();//default constructor
    FnB_menu(std::string name,int stock, int price);//constructor
    std::string get_name();//get
    int get_price();//get
    int get_stock();//get
    int prepare_food(int x);//update stock every time a food item is ordered
    bool change_stock(); //ensures the ordered food is in stock and the stock is not negative
    virtual int get_nutrition_info();//will return different values based on derived class
    ~FnB_menu();//destructor
};
#endif