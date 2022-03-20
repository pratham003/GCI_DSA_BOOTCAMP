//Write a C program to print multiplication table of any number.

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    for(int i=1; i<=10; i++)
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;

    return 0;
}