//Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).

#include<iostream>

using namespace std;

int main()
{
    char code;
    
    cout<<"Enter a character: ";
    cin>>code;
    
    if(code>='a' && code<='z')
        cout<<"It's in lowercase.";
    else if(code>='A' && code<='Z')
        cout<<"It's in uppercase.";
    else
        return 1;
    return 0;
}