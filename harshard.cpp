#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"enter a number:";
    cin >> number;
    int num=number;
    int sum=0;
    while(num != 0)
    {
        int rem=num%10; // this will calculate the remainder
        num=num/10;
        sum=sum+rem; // that calculate the sum.
    }
    if(number%sum==0)
    {
        cout<<number<<" number is harshard";
    }
}