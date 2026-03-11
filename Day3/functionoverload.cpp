#include<iostream>
using namespace std;
int area(int side)
{
    return side*side;
}
int area( int length, int breadth)
{
    return length*breadth;
}
int main()
{
    int s,l,b;

    cout<<"Enter the side of Square :";
    cin>>s;

    cout<<"Area of Square : "<<area(s)<<endl;

    cout<<"Enter the Length and Breadth of Rectangle :";
    cin>>l>>b;

    cout<<"Area of Rectangle is : "<<area(l,b)<<endl;

    return 0;
}