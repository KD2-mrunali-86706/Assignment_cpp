/*Q2. Provide menu driven code for the functionalities:  
1. Accept Employee  
a. Accept Manager  
b. Accept Salesman  
c. Accept SalesManager  
2. Display the count of all employees with respect to designation  
3. Display All Managers  
4. Display All Salesman  
5. Display All SalesManagers*/
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

int menu(){
    int choice;
    cout<<"0.EXIT"<<endl;
    cout<<"1. Accept Employee"<<endl;  
    cout<<"2.Accept Manager"<<endl; 
    cout<<"3.Accept Salesman"<<endl;  
    cout<<"4. Accept SalesManager"<<endl;  
    cout<<"5. Display the count of all employees with respect to designation"<<endl;  
    cout<<"6.Display All Managers"<<endl;  
    cout<<"7.Display All Salesman"<<endl;  
    cout<<"8.Display All SalesManagers"<<endl;
    cin>>choice;
    return choice;
}
int main()
{

    int choice;
    Employee *e[10];
    int index = 0;
    int totalmamager=0;
    int totalsalesmanager=0;
    int totalsalesman=0;
    while((choice=menu())!=0){
        switch (choice){
            case 1:
                  {
                                    Employee e;
                                    e.accept();
                                    
                  }
                  break ;



            case 2:
                    if(index<10)
                  {
                       e[index]=new Manager();
                       e[index]->accept();
                       index ++;

                  }
                  break ;
            case 3:
                    if(index<10)
                  {
                    e[index]=new Salesman();
                    e[index]->accept();
                    index++;
                    
                  }
                  break;
            case 4:
                   if(index<10)
                  {
                     e[index]=new Salesmanager();
                     e[index]->accept();
                     index++;
                  }
                  break;
            case 5:
                   for(int i=0;i<index;i++)
                   {
                    if(typeid(*e[i])==typeid(Manager))
                        {
                            totalmamager++;
                            cout<<"total manager "<<totalmamager<<endl;
                        }
                    else if(typeid(*e[i])==typeid(Salesman))
                    {
                            totalsalesman++;
                            cout<<"Total Salesman "<<totalsalesman<<endl;
                    }
                    else 
                    {
                        totalsalesmanager++;
                        cout<<"Total salesmanager "<<totalsalesmanager<<endl;
                    }
                   }



                  
                  break;
            case 6:
                  {

                   
                    for(int i=0;i<index;i++)
                    if(typeid(*e[i])==typeid(Manager))
                    e[i]->display();


                  }
                  break ;
            case 7:
                  {
                    for(int i=0;i<index;i++)
                    if(typeid(*e[i])==typeid(Salesman))
                    e[i]->display();
                  }
                  break;
            case 8:
                  {
                    for(int i=0;i<index;i++)
                    if(typeid(*e[i])==typeid(Salesmanager))
                    e[i]->display();
                  }
                  break ;
            default :
                    cout<<"wrong choice"<<endl;
            
                    
        }
       
    }
    
}