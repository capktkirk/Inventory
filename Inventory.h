#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    //An inventory constructor that takes a string (the item) a float (the cost) and an int (the amount)
    Inventory(string,float,int);
    //The sell function that dec.'s m_in_stock.
    //If there is nothing in stock, it will read out a message telling the user that no more of the item can be purchased.
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif
