/*Q1. Write a class for Time and provide the functionality 
Time() 
Time(int h,int m,int s) 
getHour() 
getMinute() 
getSeconds() 
printTime() 
setHour() 
setMinute() 
setSeconds() 
In main create an array dynamically of Time * of size 5. 
Accept the values and display.*/


#include<iostream>
using namespace std;
class Time{
    int hour;
    int minutes;
    int second;

public:
       Time()
       {
            hour=0;
            minutes=0;
            second=0;
       }
       Time(int h,int m,int s)
       {
            this->hour=h;
            this->minutes=m;
            this->second=s;

       }
       void setHour(int h)
       {
          hour=h;
       }
       void setMinute(int m)
       {
          minutes=m;
       }
       void setSecond(int s){
          second=s;
       }

       int getHour(){
        return hour;
       }
       int getMinute()
       {
        return minutes;
       }
       int getSecond(){
         return second;
       }
       void accept(){
        cout<<"enter hour min and second : "<<endl;
        cin>>hour>>minutes>>second;
       }
       void display(){
        cout<<"Hour : "<<hour<<" "<<endl;
        cout<<"minutes : "<<minutes<<" "<<endl;
        cout<<"second : "<<second<<" "<<endl;
       }
};
int main(){

         Time **ptr=new Time *[5];
         ptr[0]=new Time(10,30,36);
         ptr[1]=new Time(11,30,45);
         ptr[2]=new Time(12,30,14);
         ptr[3]=new Time(13,30,36);
         ptr[4]=new Time(14,30,22);


         for(int i=0;i<5;i++){
            ptr[i]->accept();
         }

          for(int i=0;i<5;i++){
            ptr[i]->display();
          }

          for(int j=0;j<5;j++){
            delete ptr[j];
            ptr[j]=NULL;
          }
          delete[] ptr;
          ptr=NULL;




    return 0;
}