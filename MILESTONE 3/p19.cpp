//Write a C program to enter a number and print it in words.

#include<iostream>

using namespace std;

int main()
{
    int num1, num2=0;

    cout<<"Enter a number: ";
    cin>>num1;

    while(num1!=0)
    {
        num2=(num2*10) + (num1%10);
        num1/=10;
    }

    while(num2!=0)
    {
        switch(num2%10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        num2=num2/10;
    }    
    
    return 0;
}