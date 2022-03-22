//Write a C program to check whether a number is palindrome or not.

#include<iostream>

using namespace std;

int main()
{
    int num, reverse=0;
    cout<<"Enter a number: ";
    cin>>num;

    int temp=num;

    while(temp>0)
    {
        reverse= reverse*10 + temp%10;
        temp/=10;
    }

    if(num==reverse)
        cout<<"Your number is a palindrome.";
    else
        cout<<"Your number is not a palindrome.";

    return 0;
}