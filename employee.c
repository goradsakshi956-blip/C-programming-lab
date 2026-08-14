#include<iostream>
using namespace std;
class employee
{
  int employeeid;
  string name;
  float salary;
public:
   void accept()
   {
    cout<<"Enter the employee id:";
    cin>>employeeid;
    cout<<"enter the employee name:";
    cin>>name;
    cout<<"enter the salary:";
    cin>> salary;
    }
    void display()
    {
     cout<<"employee details"<<endl;
     cout<<"employee ID:"<<employeeid<<endl;
     cout<<"employee name:"<<name<<endl;
     cout<<"employee salary:"<<salary<<endl;
     
    }
};
int main()
{
  employee e;
  e.accept();
  e.display();
  
}
