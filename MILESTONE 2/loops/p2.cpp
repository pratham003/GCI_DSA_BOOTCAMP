//Write a C program to print all natural numbers in reverse (from n to 1).

#include<iostream>

using namespace std;

int main()
{
    cout<<"Printing all natural numbers in reverse (from n to 1)\n";
    int n;
    cout<<"\nEnter the value of n: ";
    cin>>n;

    int i=n;
    while(i>0)
    {
        cout<<i<<" ";
        i--;
    }

    return 0;
}