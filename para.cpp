#include<iostream>
using namespace std;
main()
{
    int le;
    cout<<"enter length:";
    cin >> le;
    for(int i=1; i<=le;i++)
    {
        for(int y=le; y>=i;y--)
        {
            cout<<" ";
        }
        for(int x = 1;x<=i;x++)
        {
            cout<<"* ";
        }
        for(int y=le; y>=i;y--)
        {
            cout<<"  ";
        }
        for(int x = 1;x<=i;x++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}