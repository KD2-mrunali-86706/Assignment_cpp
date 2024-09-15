/* 
Q3. Write a class Address with data members (string building, string street, string city ,int pin) 
 Implement constructors, getters, setters, accept(), and display() methods. 
Test the class functunalities by creating the object of class and calling all the functions. */

#include<iostream>
using namespace std;
class Address{
    string building;
    string street;
    string city;
    int pin;

    public :
    Address(){

         building=" ";
      street=" ";
       city=" ";
        pin=0;

    }
    void setAddress(string b,string s,string c,int p)
    {
        building=b;
      street=s;
       city=c;
        pin=p;
     }
     string getBuilding(){
        return building;
     }
     string getStreet(){
        return street;
     }
     string getCity(){
        return city;
     }
     int getPin(){
        return pin;
     }

     void  accept(){
        cout<<"enter building,street,city,pin"<<endl;
        cin>>building>>street>>city>>pin;
          
        }

        void display(){


            cout<<"building: "<<building<<" street: "<<street<<" city: "<<" pin: "<<pin;
                      }

};
int main(){
    Address b;


    Address a;
    a.setAddress("Munja","civil line","Nagpur",441206);
    a.getBuilding();
    a.getStreet();
    a.getCity();
    a.getPin();
    a.display();
    Address c;
    c.accept();
    c.display();
    return 0;



}