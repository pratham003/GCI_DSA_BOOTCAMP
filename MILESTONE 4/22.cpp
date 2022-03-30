//Write a C program to find all factors of a number.

#include<iostream>

using namespace std;

int main()
{
    int num, i;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<"\nFactors are: ";
    for( i=1; i<=num; i++)
        if(num%i==0)
            cout<<i<<" ";
    
    return 0;
}