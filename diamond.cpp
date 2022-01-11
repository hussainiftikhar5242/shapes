#include<iostream>
using namespace std;
main()
{
    int y=1;
    int row=0;
    cout<<"enter number of rows:";
    cin >> row;
    for(int i=1 ; i <= row ; i++)//this will print the row
    {
        for(int x=1; x<=row-i;x++)//this will print the row
        {
            cout<<" ";
        }
        for(int y=1;y<=(2*i-1);y++)//this will print the star
        {
            cout<<"*";
        } 
        cout<<endl;
    }
    for(int i=1;i<=row-1;i++)//this will print the start in olt direction
    {
        for(int x=1; x<=i;x++)//this will print space 
        {
            cout<<" ";
        }
        for(int y=1;y<=(2*(row-i)-1);y++)//this will print star.
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}