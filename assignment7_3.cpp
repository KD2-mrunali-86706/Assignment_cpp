/*Q3. Write a class to store Account information of Bank customer by using following class diagram. 
Use enum to store information of account type. 
Create an array of 5 Accounts in main() and accept their details from user.
Write Menu driven program to deposit/withdraw amount from the account.
After each transaction display updated account balance. 
Throw exceptions for invalid values. 
Also implement an exception class InsufficientFundsException.
In withdraw if sufficient balance is not available in account or while deposit the entered amount is 
negative then throw this exceptiondivision 1
something went wrong*/
#include<iostream>
using namespace std;
class InsufficientFundsException
{
   
    public:
    string msg;
    InsufficientFundsException()
    {
       msg="";
    }
    InsufficientFundsException(string msg)
    {
        this->msg=msg;
    }
    void show()
    {
        cout<<"msg  "<<msg<<endl;
    }
};
enum AccountType
{
    Exit,
    Saving=1,
    Current,
    Dmat
};
class Account:public InsufficientFundsException
{
    AccountType etype;
    int accno;
    double balance;
    double amount;
    public:
    Account()
    {

    }
    Account(int accno,double balance)
    {
        this->accno=accno;
        this->balance=balance;
    }
    void accept()
    {
        int ch;
        cout<<"enter account number "<<endl;
        cin>>accno;
        cout<<"enter balences "<<endl;
        cin>>balance;
        cout<<"enter account types "<<endl;
       
        cout<<"1.Saving Account "<<endl;
        cout<<"2.Current Account "<<endl;
        cout<<"3.Dmat Account "<<endl;
        cin>>ch;
        etype=AccountType(ch);
       
    }
    void deposit(double amount)
    {
        if(amount < 0)        
        {throw InsufficientFundsException("Deposite amount is 0 ");}
        balance +=amount;
        cout<<"amount updatre successful "<<endl;
    }
    
    void withdraw(double amount)
    {
       if (amount > balance) {
            throw InsufficientFundsException("Insufficient funds in the account.");
        }
        if (amount <= 0) {
            throw InsufficientFundsException("Withdraw amount cannot be negative or zero");
        }
        balance -= amount;
        cout << "Withdrawn successfully " << balance << endl;

    }
    void display()
    {
         switch(etype)
        {
            case Exit:
            cout<<"program end "<<endl;
            break;

            case Saving:
            cout<<"saving account "<<endl;
            break;

            case Current:
            cout<<"current account "<<endl;
            break;

            case Dmat:
            cout<<"Dmat Account "<<endl;
            break;

            default :
            cout<<"wrong choices ";
            break;
        }

        cout<<"account accno "<<accno<<endl;
        cout<<"account balence "<<balance<<endl;
        cout<<" ";
    }
};

int main()
{
     Account *a[3];
   // double balance=0;
   for(int i=0;i<3;i++)
   {
       a[i]=new Account;
       a[i]->accept();
   }
   
   try{      
   for(int i=0;i<3;i++)
   {
       double amount;
      cout<<"enter amount to deposite "<<endl;
      cin>>amount;
       a[i]->deposit(amount);
   }
   for(int i=0;i<3;i++)
   {
       double amount;
      cout<<"enter amount to withdraw "<<endl;
      cin>>amount;
       a[i]->withdraw(amount);

   }
   }
   catch(InsufficientFundsException i)
   {
       i.show();
   }
   for(int i=0;i<3;i++)
   {
       a[i]->display();
   }
   
  for(int i=0;i<3;i++)
  {
      delete a[i];
     // a=NULL;
  }
  
}