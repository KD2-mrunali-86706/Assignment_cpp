/*Q1. Write a menu driven program for Date in a CPP language using structure and also using class. 
Date is having data members day, month, year. Implement the following functions. 
void initDate(); // to initialize the Date object with default values for data members (1,1,1900) 
void printDateOnConsole(); 
void acceptDateFromConsole(); 
bool isLeapYear(); */

#include<iostream>
using namespace std;
class DateExample{
    int day;
    int month;
    int year;
public:
void initDate(int day=1,int month=1,int year=1990)
{
   cout<<day<<","<<month<<","<<year;
}

void acceptDateFromConsole(){
cout<<"enter day,month,year";
cin>>day>>month>>year;

}
void printDateOnConsole(){

  cout<<day<<","<<month<<","<<year;
}
bool isLeapYear(){
    if(year%4==0){
        cout<<year <<" is leap year"<<endl;
      

    }
      return false;
    
    }


};

int menu(){
    int choice;
    cout<<"0.exit"<<endl;
    cout<<"1.initdate"<<endl;
    cout<<"2.acceptdate"<<endl;
    cout<<"3.printdate"<<endl;
    cout<<"4.isleapyear"<<endl;
    cout<<"enter choice"<<endl;
    cin>>choice;
    return choice;

}
int main(){
    DateExample d;
  int choice;
  while((choice=menu())!=0){
  switch(choice){
    case 1:
            d.initDate();
            break;
    case 2:
            d.acceptDateFromConsole();
            break;
    case 3:
            d.printDateOnConsole();
            break;
    case 4:
            d.isLeapYear();
    default:
            cout<<"wrong choice ";
            break;
  }
  }
  return 0;
  
  }



    // d.initDate();
    // d.acceptDateFromConsole(); 
    // d.printDateOnConsole();
    // d.isLeapYear();

