/* Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1 */

#include<iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    if(num<0)
    {
        cout<<"Absolute value: "<<(-1*num);
    }
    else 
        cout<<"Absolute value: "<<num;
}