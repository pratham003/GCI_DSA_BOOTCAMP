//Write a C program to print all ASCII character with their values.

#include<iostream>

using namespace std;

int main()
{
    int i=0;
    char c=0; 
    
    for(; i<=255; i++,c++) 
        cout<<"ASCII value of character "<<c<<" = "<<i<<endl;
    
    return 0;
}