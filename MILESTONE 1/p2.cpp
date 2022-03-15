//Write a program to print a maximum of two numbers

#include<iostream>

using namespace std;

int main()
{
    float a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a>b)
        cout<<"Greater number is "<<a;
    else
        cout<<"Greater number is "<<b;

    return 0;
}