/*Implement following classes. Test all functionalities in main() of each created class. Note that 
employee is inherited into manager and sales*/
#include<iostream>
using namespace std;
class Employee
{
    int id;
    double salary;
    public:
    Employee()
    {
        id=0;
        salary=0;
    }
    Employee(int id,double salary)
    {
        this->id=id;
        this->salary=salary;
    }
     virtual void accept()
    {
        cout<<"enter id "<<endl;
        cin>>id;
        cout<<"enter salary "<<endl;
        cin>>salary;
    }
    virtual void display()
    {
        cout<<"Emp id "<<id<<endl;
        cout<<"Emp salary "<<salary<<endl;
        
    }
};
class Manager:virtual public Employee
{
    double bonus;
    protected:
    void acceptManager()
    {
        cout<<"enter a bonus "<<endl;
        cin>>bonus;
    }
    void displayManager()
    {
        cout<<"Bonus is "<<bonus<<endl;
    }
    public:
    Manager()
    {
        bonus=0;
    }
    Manager(int id,double salary,double bonus):Employee(id,salary)
    {
        this->bonus=bonus;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }
    void display()
    {
        Employee::display();
        displayManager();
    }
    
};
class Salesman:virtual public Employee
{
    double commision;
    protected:
     void acceptSalesman()
    {
        cout<<"enter commision "<<endl;
        cin>>commision;
    }
    void displaySalesman()
    {
        cout<<"Commision is "<<commision<<endl;
    }
    public:
    Salesman()
    {
        commision=0;
    }
    Salesman(int id,double salary,double commision):Employee(id,salary)
    {
        this->commision=commision;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();        
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
   
};
class Salesmanager:public Manager,public Salesman
{
    public:
    Salesmanager()
    {

    }
    Salesmanager(int id,double salary,double bonus,double commision):Employee(id,salary)
    {

    }
    void accept()
    {
        Employee::accept();
        this->acceptManager();
        this->acceptSalesman();
        
    }
    void display()
    {
        Employee::display();
        this->displayManager();
        this->displaySalesman();
    }
};
int main()
{
    Employee *e=new Salesmanager;
    e.accept();
    e.display();
    //Salesmanager s;
}
/*enter id
101
enter salary 
20000
enter a bonus 
3000
enter commision 
5000
Emp id 101       
Emp salary 20000 
Bonus is 3000    
Commision is 5000*/