//Write a program to check whether a number is even or odd

#include<iostream>

using namespace std;

int main()
{
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    if(num%2==0)
        cout<<"Your number is Even.";
    else
        cout<<"Your number is Odd.";
    
    return 0;
}