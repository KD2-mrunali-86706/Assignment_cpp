/*Q2. Write a menu driven program for Student management. 
Create a class student with data members name, gender, rollNumber(Auto generated) and array to 
keep marks of three subjects.  
Accept every thing from user and Print name, rollNumber, gender and percentage. 
In main(), create Student* arr[5] and provide facility for accept, print, search. 
Search function returns index of found Student, otherwise returns -1.*/
#include<iostream>
using namespace std;
class Student{
    string name;
    
    int const roll_no;
    string gender;
    double marks[3];
    double percentage;
    double total=0;
    static int nroll_no;
 

public :

    Student():roll_no(nroll_no++){
        name="";
       
        gender="";
        marks[0]=0;
        percentage=0;
    }
   
 void    accept(){
        
        cout<<"enter name :"<<endl;
        cin>>name;
        // cout<<"enter roll_no:"<<endl;
        // cin>>roll_no;
        cout<<"enter gender :"<<endl; 
        cin>>gender;
        for(int i=0;i<3;i++){
            cout<<"enter the marks of Subject : "<<i+1<<" :";
            cin>>marks[i];
            total=marks[i]+total;
          
            
                        }
        
        
       

        
                        
    }
    void  print(){
        
        cout<<"Name of the student : "<<name<<endl;
        cout<<"Roll No : "<<roll_no<<endl;
        cout<<"Gender : "<<gender<<endl;
        for(int i=0;i<3;i++){
            cout<<"Subject Marks :"<<marks[i]<<endl;

                            }
                            cout<<"total marks :"<<total<<endl;
                            percentage=(total/300)*100;
                            cout<<"Percentage :"<<percentage<<"%"<<endl;
               }




 
   
    
};
int menu(){

    
    int choice;
    cout<<"0.Exit"<<endl;
    cout<<"1.Student Data : "<<endl;
    cout<<"2.Print Data : "<<endl;
    cout<<"Enter choice : "<<endl;
    cin>>choice;
    return choice;

};
 int Student ::  nroll_no=0;
int main(){
    
      Student **ptr=new Student *[2]; 
        
       Student s;
       int choice;
       while((choice=menu())!=0){
        switch(choice){
            case 1:

              
                   for(int i=0;i<2;i++){
                    ptr[i]=new Student();
                     cout<<"enter student Data"<<endl;
                     ptr[i]->accept();
                   }
                   
                   break;

            case 2:
                    for(int i=0;i<2;i++){
                    // ptr[i]=new Student();
                    ptr[i]->print();

                }
                   
                   break;
            default:

                   cout<<"wrong choice"<<endl;
                   break;
                    
                    
                     }
       }

       return 0;
}