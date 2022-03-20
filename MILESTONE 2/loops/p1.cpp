//Write a C program to print all natural numbers from 1 to n.

#include<iostream>

using namespace std;

int main()
{
    int i=1, n;

    cout<<"Printing Natural Numbers from 1 to n\n\n";

    cout<<"Enter the value of 'n': ";
    cin>>n;

    while(i<=n)
    {
        cout<<i<<" ";
        i++;
    }

    return 0;
}