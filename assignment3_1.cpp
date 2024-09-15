/* 
Q1. Write a menu driven program to calculate volume of the box(length * width * height). 
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor. 
Create the local objects in respective case and call the function to caluclate area. 
Menu options ->  
1. Calculate Volume with default values 
2. Calculate Volume with length,breadth and height with same value 
3. Calculate Volume with different length,breadth and height values. */
#include<iostream>
using namespace std;
class CalculateVolume{

    int length;
    int width;
    int height;


public:
 CalculateVolume(){
    length=1;
    width=1;
    height=1;
 }
 CalculateVolume(int value){
  cout<<"enter value :";
  cin>>value;
  
   length=value;
  width=value;
    height=value;
 }

 CalculateVolume(int length,int width,int height){
  cout<<"enter legth,width,height :";
  cin>>length>>width>>height;
  this->length=length;
  this->width=width;
  this->height=height;
 }

  void  volumeOfBox(){
    cout<<"volume of box is:"<<length*width*height<<" "<<endl;
   } 
};

int menu(){
    int choice ;
    cout<<"0.exit"<<endl;
    cout<<"1.calculate volume with default values: "<<endl;
    cout<<"2. Calculate Volume with length,breadth and height with same value: "<<endl;
    cout<<"3. Calculate Volume with different length,breadth and height values.: "<<endl;
    cout<<"enter the choice: "<<endl;
    cin>>choice;
    return choice;
}




int main(){
     
    int choice;
     int value;
     int l;
     int w;
     int h;
    while((choice=menu())!=0){
        switch (choice)
        {
              case 1:
              {
                
                CalculateVolume c1;
                c1.volumeOfBox();

              }
              break ;

              case 2:
              {  

               
                CalculateVolume c2(value);
                c2.volumeOfBox();

              }
              break;

              case 3:
              {
                  CalculateVolume c3(l,w,h);
                  c3.volumeOfBox();
              }
              break;
              


        }
        
    }

    // CalculateVolume c;
    // c.volumeOfBox();
    // CalculateVolume d(2);
    // d.volumeOfBox();
    // CalculateVolume cal(2,5,6);
    // cal.volumeOfBox();
    return 0;

    
}