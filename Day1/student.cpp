#include<iostream>
using namespace std;
class student
{
    public:
    int rollNo;
    string name;
    float marks;

    student()
    {
        cout<<"Enter Student Roll No."<<endl;
        cin>>rollNo;

        cout<<"Enter Name :"<<endl;
        cin>>name;

        cout<<"Enter Marks :"<<endl;
        cin>>marks;
    }
    student(int a, string  b, float c)
    {
        rollNo=a;
        name=b;
        marks=c;
    }
    void display()
    {
        cout<<"Student Roll No. is :"<<rollNo<<endl;
        cout<<"Name is :"<<name<<endl;
        cout<<"Marks is : "<<marks<<endl;
    }
};
int main()
{
    student s;
    student s1(1,"Rutuja",75.86);
    s.display();
    s1.display();

    return 0;
}