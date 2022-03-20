//Take values of length and breadth of a rectangle from user and check if it is square or not

#include<iostream>

using namespace std;

int main()
{
    int l, b;
    
    cout<<"Enter the length and breadth of a rectangle: ";
    cin>>l>>b;
    
    if(l==b)
        cout<<"It's a square.";
    else
        cout<<"It's not a square.";

    return 0;
}