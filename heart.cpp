#include<iostream>
using namespace std;
main()
{
    int row;
    cout<<"enter size of heart :";
    cin >> row;
    for(int i=(row/2); i<=row;i=i+2)
    {
        for(int y=1; y<row-i;y=y+2)
        {
            cout<<" ";
        }
        for(int x = 1;x<=i;x++)
        {
            cout<<"*";
        }
        for(int y=1; y<row-i;y=y+2)
        {
            cout<<"  ";
        }
        for(int x = 1;x<=i;x++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=row-1;i++)
    {
        for(int x=1; x<=i;x++)
        {
            cout<<" ";
        }
        for(int y=1;y<=(2*(row-i)-1);y++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}