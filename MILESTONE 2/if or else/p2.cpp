//Take two int values from user and print greatest among them

#include<iostream>

using namespace std;

int main()
{
    int a, b;
    
    cout<<"Enter two numbers: ";
    cin>>a>>b; 
    
    if(a>b)
        cout<<a<<" is the greatest";
    else
        cout<<b<<" is the greatest";
    
    return 0;
}