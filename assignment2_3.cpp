/*Q3. Create a namespace NStudent. Create the Student class(created as per Q2) inside namespace. 
Create the object of student and perform accept and display student.*/
#include<iostream>
using namespace std;
namespace NSstudent
{
 class Student
 {
    private:


         int roll_no;
         int marks;
         string name; /* data */
 public:
    

       
      
        void acceptStudentFromConsole(){
            cout<<"enter roll no,name,marks:";
            cin>>roll_no>>name>>marks;
        }
        void printStudentOnConsole(){

            cout<<roll_no<<" "<<name<<" "<<marks<<endl;
        } 


 

 };

}
int main(){
    
    NSstudent::Student s;
   
    s.acceptStudentFromConsole();
    s.printStudentOnConsole();
    return 0;


}

