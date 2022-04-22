//Write a C program to calculate factorial of a number.

#include<iostream>

using namespace std;

void factorial(int n)
{
    int i=1, j;
    while(i<=n)
    {
        j=j*i;
        i++;
    }
    cout<<n<<"! = "<< j;
}

int main()  
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    factorial(num);

    return 0;
}