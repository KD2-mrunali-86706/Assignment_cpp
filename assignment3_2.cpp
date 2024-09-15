
/* 
Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. 
Mostly they do, but sometimes a car goes by without paying. 
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money 
collected. Model this tollbooth with a class called tollbooth. 
The two data items are a type unsigned int to hold the total number of cars, and a type double to 
hold the total amount of money collected. 
A constructor initializes all data members to 0. A member function called payingCar() increments 
the car total and adds 0.50 to the cash total. An other function, called nopayCar() 
increments the car total but adds nothing to the cash total. Finally, a member function called 
printOnConsole() displays the two totals and number of paying as well as non paying cars total.*/



#include<iostream>
using namespace std;
class TollBooth{
    unsigned int total_number_cars;
    double total_amount;
    unsigned int  nopayingcars=0;
    unsigned int paying_cars;





 public:

    TollBooth(){
                total_amount=0;
                total_number_cars=0;
                
        
    }

 void  payingCar(){
      
        total_amount=total_amount+0.50;
       paying_cars++;

    }

    void printPaycar(){
            cout<<"paying cars :"<<paying_cars;
    }
    
   void  noPayingCar(){
         nopayingcars++;
    }
    void printNonPayCars(){
                  cout<<"Non paying  cars : "<<nopayingcars;
}



    

     void printtotalcar(){
        cout<<"total cars : "<<paying_cars+nopayingcars;
     }

     void printMoney(){
        cout<<"total amount :"<<total_amount;
     }


    void printOnConsole(){
    
cout<<"Total cras who paid the toll:"<<total_number_cars<<" "<<endl;
cout<<"Total cras who didnt paid the toll:"<<nopayingcars<<" "<<endl;
cout<<"Total cars who passed through toll plaza:"<<total_number_cars+nopayingcars<<" "<<endl;
cout<<"Total cash :"<<total_amount<<" "<<endl;
     
}


};
int main(){
 
 TollBooth t1;
t1.payingCar();
t1.noPayingCar();
t1.printOnConsole();


}


