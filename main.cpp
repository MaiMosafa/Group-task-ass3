#include <iostream>
#include "VendongMachine.h"
using namespace std;


int main()
{
    VendingMachine ob;
    ob.menu();
    ob.entermoney();
    while(ob.getchoose() != 11){
        if(ob.enterchoose()==true) ob.pickitem();
    }

    return 0;
}
