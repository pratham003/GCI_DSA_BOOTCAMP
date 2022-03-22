//Write a C program to find sum of first and last digit of a number.

#include<iostream>

using namespace std;

int main()
{
    int f, l, num, count=0;
    cout<<"Enter a number: ";
    cin>>num;
    f=num;
    l=num%10;
    while(f>10)
    {
        f/=10;
        count++;
    }
    cout<<"\nSum of first and last digit is "<<f+l;
    
    return 0;
}