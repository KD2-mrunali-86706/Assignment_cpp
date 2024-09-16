/*Q1. Create a class Date with data memebrs day,month and year. 
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of 
type Date. 
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should 
be of type date. 
Employee class should be inherited from Person. 
Implement following classes. Test all functionalities in main(). */
#include<iostream>
using namespace std;
class Date{
    int day;
    int month;
    int year;
    
     public: 
     Date()
    {
        cout << "Date()" << endl;
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
     void setDay(int day){
                this->day=day;
            }
            void setMonth(int month){
                this->month=month;
            }
            void setYear(int year){
                this->year=year;
            }
            int getDay(){
                return day;
            }
            int getMonth(){
                return month;
            }
            int getYear(){
                return year;
            }
    Date(int day, int month, int year)
    {
        cout << "Date(int,int,int)" << endl;
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void acceptDate()
    {
        cout << "Enter day, month and year - ";
        cin >> day >> month >> year;
    }
    void displayDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};
class Person{
protected :                  /*we are making them protected to access the name in employee class*/
    string name;
    string address;
    Date d;

    public :

    Person(){
        name="";
        address="";

    }
     Person(string name,string address,int day,int month, int year):d(day,month,year){
        this->name=name;
        this->address=address;
        this->d.setDay(day);
        this->d.setMonth(month);
        this->d.setYear(year);
     }
     void acceptPerson(){
                  cout<<"Enter name of person : "<<endl;
                  cin>>name;
                  cout<<"Enter the address : "<<endl;
                  cin>>address;
                  cout<<"Enter the date of birth : "<<endl;
                  d.acceptDate();
    }

    void displayPerson(){
                  cout<<"Name of the Employee :"<<name<<endl;
                  cout<<"Address of employee is : "<<address<<endl;
                  cout<<"Date of birth of employee is : ";
                  d.displayDate();
    }


};

class Employee:public Person{
    int id;
    double salary;
    string department;
    Date DOj;//association and composition 


public :
    Employee(){
       id=0;
       salary=0;
       department="";

    }
    Employee(int id,double s,string d,int day,int month,int year) :DOj(day,month,year)
    {
                  this->id=id;

                  this->salary=s;
                  this->department=d;
                  this->DOj.setDay(day);
                  this->DOj.setMonth(month);
                  this->DOj.setYear(year);
    }

    void acceptEmployee(){
                  cout<<"Enter the ID: "<<endl;
                  cin>>id;
                  Person::acceptPerson();
                  cout<<"Enter the salary : "<<endl;
                  cin>>salary;
                  cout<<"Enter the department : "<<endl;
                  cin>>department;
                  cout<<"Enter the date of joining : "<<endl;
                  DOj.acceptDate();
    }

    void displayData(){
                  cout<<"ID : "<<id<<endl;
                  Person::displayPerson();
                  cout<<"salary : "<<salary<<endl;
                  cout<<"department : "<<department<<endl;
                 
                  cout<<"Date of joining of employee is : ";
                  DOj.displayDate();
    }
};

class Salesman :public Employee{
    double commission;

protected :
          void acceptSalesman(){
            cout<<"accept the commission : "<<endl;
            cin>>commission;

          }
          void displaySalesman(){
            cout<<"commision : "<<endl;
          }

    public :

        Salesman(){

               }
            
}





int main(){
    Date d;
    d.acceptDate();
    d.displayDate();
    Person p;
    p.acceptPerson();
    p.displayPerson();

    Employee e;
    e.acceptEmployee();
    e.displayData();
   
}