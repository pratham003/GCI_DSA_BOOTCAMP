//Write a C program to print all alphabets from a to z.

#include<iostream>

using namespace std;

int main()
{
    char c='a';

    while(c<='z')
    {
        cout<<c<<" ";
        c++;
    }

    return 0;
}