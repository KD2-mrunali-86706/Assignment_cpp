
/*Q2. Write a menu driven program for Student in CPP language. Create a class student with data 
members roll no, name and marks. Implement the following functions 
void initStudent(); // to initialize the student object with default values for data members (0,” ”,0); 
void printStudentOnConsole(); 
void acceptStudentFromConsole(); */

#include<iostream>
using namespace std;
class Student
{
    int roll_no;
    int marks;
    string name;

public :
        void initStudent(int roll_no=0,string name=" ",int marks=0)
        {
            cout<<roll_no<<","<<name<<","<<marks;
        }
        void printStudentOnceConsole(){

        }
        void acceptStudentFromConsole(){
            cout<<"enter roll no,name,marks:";
            cin>>roll_no>>name>>marks;
        }
        void printStudentOnConsole(){

            cout<<roll_no<<" "<<name<<" "<<marks<<endl;
        } 


};

int menu(){
    int choice;
    cout<<"0.exit"<<endl;
    cout<<"1.void initStudent"<<endl;
     cout<<"2.void acceptStudentFromConsole"<<endl;
    cout<<"3.void printStudentOnConsole"<<endl;
    
   
    cout<<"enter choice"<<endl;
    cin>>choice;
    return choice;

}

int main(){
    Student s;
    int choice;
    while((choice=menu())!=0){

        switch(choice){
            case 1:
              s.initStudent();
              break;

            case 2:
            s.acceptStudentFromConsole();
            break;

            case 3:
            s.printStudentOnConsole();
            break;

            default:
                   cout<<"wrong choice"<<endl;
                   break;
        }
    }

    // s.initStudent();
    // s.acceptStudentFromConsole();
    // s.printStudentOnConsole();
    return 0;

}

