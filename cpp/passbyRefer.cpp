#include<iostream>
using namespace std;

void swap(int &a , int &b);

int main()
{
    int x ,y ;
    cout<<"Enter Two numbers :";
    cin>>x>>y;

    cout<<"Before Swap : x = "<<x <<" y = "<<y<<endl;

    swap(x , y);

    cout<<"After Swap : x = "<<x <<" y = "<<y<<endl;

    return 0;
}

void swap(int &a , int &b)
{
    int temp ; 
    temp = a ;
    a = b ;
    b = temp ;
}