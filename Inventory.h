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
    //An inventory constructor
    Inventory(string,float,int);
    //The sell function that dec.'s m_in_stock.
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif
