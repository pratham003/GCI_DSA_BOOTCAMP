//Write a C program to find HCF (GCD) of two numbers.

#include<iostream>

using namespace std;

int main()
{
    int num1, num2, i, HCF;
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter a number: ";
    cin>>num2;

    for( i=1; i<=num1 || i<=num2; i++)
        if(num1%i==0 && num2%i==0)
            HCF=i;
    
    cout<<"HCF = "<<HCF;

    return 0;
}