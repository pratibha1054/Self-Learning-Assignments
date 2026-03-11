#include<iostream>
using namespace std;
string company ="Infosys Technology";
class Employee
{
    public :
        int empId;
        string name;
       double salary;

    static int totalEmployees;

    public :
    Employee(int i ,string n , double s)
    {
        empId=i ;
        name=n;
        salary=s;
        totalEmployees++;
    }
    void display()
    {
        cout<<"Company Name :"<<company<<endl;
        cout<<"Employee Id :"<<empId<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Salary :"<<salary<<endl;
        cout<<"---------------------"<<endl;
    }
    static void showTotalEmployees()
    {
        cout<<"Total Employee Created :"<<totalEmployees<<endl;
    }
};
int Employee::totalEmployees=0;
int main()
{
    Employee e1(101,"Rutuja",60000);
     Employee e2(101,"Pratibha",50000);
      Employee e3(101,"Shruti",70000);
       Employee e4(101,"Shubhangi",50000);
        Employee e5(101,"Pornima",80000);

        e1.display();
        e2.display();
        e3.display();
        e4.display();
        e5.display();

        Employee::showTotalEmployees();
        return 0;
}