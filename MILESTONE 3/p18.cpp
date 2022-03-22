//Write a C program to find frequency of each digit in a given integer.

#include<iostream>

using namespace std;

int main()
{
    int num, L, freq[10], i;

    cout<<"Enter any number: ";
    cin>>num;

    for(i=0; i<10; i++)
        freq[i] = 0;

    int temp = num; 

    while(temp != 0)
    {
        L = temp % 10;
        temp /= 10;
        freq[L]++;
    }

    cout<<"Frequency of each digit in "<<num<<" is: \n\n";

    for(i=0; i<10; i++)
        cout<<"Frequency of "<<i<<" = "<<freq[i]<<endl;

    return 0;
}