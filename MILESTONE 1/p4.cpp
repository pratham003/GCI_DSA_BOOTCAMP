//Write a program to check whether a number is negative, zero, positive

#include<iostream>

using namespace std;

int main()
{
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    if(num>0)
        cout<<"Your number is Positive.";
    else if(num<0)
        cout<<"Your number is Negative.";
    else
        cout<<"Your number is equal to zero.";

    return 0;
}