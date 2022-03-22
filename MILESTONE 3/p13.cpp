//Write a C program to swap first and last digits of a number.

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int F, L, num, count=0, num1;
    cout<<"Enter a number: ";
    cin>>num;
    F=num;
    L=num%10;
    while(F>10)
    {
        F/=10;
        count++;
    }
    
    num1=num;
    num1-=L;
    num1+=F;
    num1%=((int)pow(10,count));
    num1+=(L*(int)pow(10,count));

    cout<<"\nOriginal number = "<<num;
    cout<<"\nNumber after swapping first and last digit: "<<num1;

    return 0;
}