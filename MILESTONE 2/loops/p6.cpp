//Write a C program to find sum of all natural numbers between 1 to n.

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }
    cout<<"Sum = "<<sum;

    return 0;
}