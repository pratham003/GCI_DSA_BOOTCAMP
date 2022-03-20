/* A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount. */

#include<iostream>

using namespace std;

int main()
{
    int salary, bonus, years;
    
    cout<<"Enter the year(s) of service: ";
    cin>>years;
    cout<<"Enter the salary: ";
    cin>>salary;
    
    if(years>5)
    {
        bonus=(salary*5)/100;
        cout<<"The bonus amount is "<<bonus;
    }
    else
        cout<<"You are not eligible for bonus.";
    
    return 0;
}