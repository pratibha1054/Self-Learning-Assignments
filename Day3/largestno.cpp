#include<iostream>
using namespace std;
int main()
{
    int a[50],n,large;
    cout<<"Enter Number of Elements :";
    cin>>n;

    cout<<"Enter Elements :";
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    large=a[0];

    for(int i=1 ;i<n ; i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    cout<<"Largest Number is : "<<large;

    return 0;
}