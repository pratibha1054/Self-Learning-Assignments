#include<iostream>
using namespace std;

void  add(int *a , int *b)
{
    int sum = *a + *b ;
    cout<<"Sum = "<<sum<<endl;
}

int main()
{
    int x , y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;

    add(&x , &y);

    return 0;
}
