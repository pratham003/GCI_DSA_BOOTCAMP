/* Modify the above question to allow student to sit if he/she has medical cause. Ask user if 
he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly. */

#include<iostream>

using namespace std;

int main()
{
    int x, y, z;
    char opt;
    //x = Number of classes held
    //y = Number of classes attended
    //z = attendance

    cout<<"Enter the number of classes held: ";
    cin>>x;
    cout<<"Enter the number of classes attended: ";
    cin>>y;
    cout<<"Do you have a medical cause (Y/N): ";
    cin>>opt;

    z=(y*100)/x;

    if(z<75)
    {
        cout<<"\nPercentage of classes attended: "<<z;
        if(opt=='Y')
            cout<<"\nYou are allowed to sit in exam.";
        else
            cout<<"\nYou are not allowed to sit in exam.";
    }
    else
    {
        cout<<"\nPercentage of classes attended: "<<z;
        cout<<"\nYou are allowed to sit in exam.";
    }
}