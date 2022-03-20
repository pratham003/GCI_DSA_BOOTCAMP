//Write a C program to count number of digits in a number.

#include<iostream>

using namespace std;

int main()
{
    int num, temp;
    cout<<"Enter a number: ";
    cin>>num;
    temp=num;
    int i=0;
    while(temp>0)
    {
        i++;
        temp/=10;
    }
    cout<<"Number of digits in "<<num<<": "<<i;
    
    return 0;
}