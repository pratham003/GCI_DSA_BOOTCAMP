//Write a C program to find power of a number using for loop.

#include <iostream>

using namespace std;

int main()
{
    int power, base, value=1;
    
    cout<<"Enter a num: ";
    cin>>base;
    cout<<"Enter power raised: ";
    cin>>power;

    for(int i=0; i<power; i++)
    {
        value = value * base;
    }
    cout<<base<<"^"<<power<<" = "<<value;
    
    return 0;
}