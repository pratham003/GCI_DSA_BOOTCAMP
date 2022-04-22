//Write a C program to find LCM of two numbers.

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, i, LCM, arr[100];
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter a number: ";
    cin>>num2; 

    if(num1>num2)
        i=num1;
    else
        i=num2;

    for(;; i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            LCM = i;
            break;
        }
    }
    
    cout<<"\nLCM = "<<LCM;
    
    return 0;
}