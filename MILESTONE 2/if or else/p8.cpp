/* A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not. */

#include<iostream>

using namespace std;

int main()
{
    int x, y, z;
    //x = Number of classes held
    //y = Number of classes attended
    //z = attendance

    cout<<"Enter the number of classes held: ";
    cin>>x;
    cout<<"Enter the number of classes attended: ";
    cin>>y;

    z=(y*100)/x;

    if(z<75)
    {
        cout<<"Percentage of classes attended: "<<z;
        cout<<"\nYou are not allowed to sit in exam.";
    }
    else
    {
        cout<<"Percentage of classes attended: "<<z;
        cout<<"\nYou are allowed to sit in exam.";
    }
}