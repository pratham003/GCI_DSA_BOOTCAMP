//Take input of age of 3 people by user and determine oldest and youngest among them.

#include<iostream>

using namespace std;

int main()
{
    int age1, age2, age3;

    cout<<"Enter the age of person 1: ";
    cin>>age1;
    cout<<"Enter the age of person 2: ";
    cin>>age2;
    cout<<"Enter the age of person 3: ";
    cin>>age3;

    if(age1>age2 && age1>age3)
    {
        cout<<"Person 1 is the oldest.\n";
        if(age2<age3)
            cout<<"Person 2 is the youngest.";
        else
            cout<<"Person 3 is the youngest.";
    }
    else if(age2>age1 && age2>age3)
    {
        cout<<"Person 2 is the oldest.\n";
        if(age1<age3)
            cout<<"Person 1 is the youngest.";
        else
            cout<<"Person 3 is the youngest.";
    }
    else if(age3>age1 && age3>age2)
    {
        cout<<"Person 3 is the oldest.\n";
        if(age1<age2)
            cout<<"Person 1 is the youngest.";
        else
            cout<<"Person 2 is the youngest.";
    }
    else
        return 1;

    return 0;
}