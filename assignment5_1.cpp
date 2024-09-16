/*Q1. Create a class Date with data memebrs day,month and year. 
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of 
type Date. 
Implement above classes. Test all functionalities in main(). */

#include<iostream>
using namespace std;
class Date{
            int day;
            int month;
            int year;

    public :
            Date(){
                day=0;
                month=0;
                year=0;
            }
            Date(int day,int month,int year){
                this->day=day;
                this->month=month;
                this->year=year;

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
            void acceptData(){
                cout<<"enter day,month and year :"<<endl;
                cin>>day>>month>>year;
            }
            void displayDate(){
                cout<<day<<"/"<<month<<"/"<<year<<endl;
            }

};
class Employee{
    string name;
    string address;
    Date DOB;//association and composition 
public :
    Employee(){
        name="";
        address="";
    }
    Employee(string n,string address,int day,int month,int year) :DOB(day,month,year)
    {
                  this->name=name;
                  this->address=address;
                  this->DOB.setDay(day);
                  this->DOB.setMonth(month);
                  this->DOB.setYear(year);
    }

    void acceptEmployee(){
                  cout<<"Enter name of employee : "<<endl;
                  cin>>name;
                  cout<<"Enter the address : "<<endl;
                  cin>>address;
                  cout<<"Enter the date of birth : "<<endl;
                  DOB.acceptData();
    }

    void displayData(){
                  cout<<"Name of the Employee :"<<name<<endl;
                  cout<<"Address of employee is : "<<address<<endl;
                  cout<<"Date of birth of employee is : ";
                  DOB.displayDate();
    }
};


int main(){
    Employee e;
    e.acceptEmployee();
    e.displayData();
}