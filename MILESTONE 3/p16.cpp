//Write a C program to enter a number and print its reverse.

#include<iostream>

using namespace std;

int main()
{
    int num, reverse=0;
    cout<<"Enter a number: ";
    cin>>num;

    while(num>0)
    {
        reverse= reverse*10 + num%10;
        num/=10;
    }

    cout<<"Reverse is: "<<reverse;

    return 0;
}