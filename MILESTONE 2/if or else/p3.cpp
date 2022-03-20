/* A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user. */

#include<iostream>

using namespace std;

int main()
{
    int quantity, unit_cost= 100, total_cost;
    
    cout<<"Enter the quantity: ";
    cin>>quantity;
    
    if(quantity>1000)
        total_cost=(unit_cost*quantity*10)/100;
    else
        total_cost=unit_cost*quantity;
    
    cout<<"Total cost = "<<total_cost;
    
    return 0;
}