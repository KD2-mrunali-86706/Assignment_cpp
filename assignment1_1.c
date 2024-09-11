/*Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members 
day, month, year. Implement the following functions. 
void initDate(struct Date* ptrDate); 
void printDateOnConsole(struct Date* ptrDate); 
void acceptDateFromConsole(struct Date* ptrDate);*/

#include<stdio.h>
struct date {
   int day;
   int month;
   int year ;
   
};
    void initdate(struct date * ptrdate)
    {
    ptrdate->day;
    ptrdate->month;
    ptrdate->year;
    }

   void printDateOnConsole(struct date * ptrdate)
   {
    printf("Date = %d: %d : %d",ptrdate->day,ptrdate->month,ptrdate->year);

   }
      void acceptDateFromConsole(struct date * ptrdate){
       printf ("......enter the day month year......\n");
       scanf("%d%d%d",&ptrdate->day,&ptrdate->month,&ptrdate->year);
  }
  int menu()
{
    int choice;
    printf( "0. EXIT \n" );
     printf( "1. ADD DATE \n" );
     printf( "2. DISPLAY DATE  \n" );
     printf( " Enter Your Choice \n" );
    scanf("%d",&choice);
    return choice;
}

   int main()
   {
      int choice;
     struct date d1;
    
     while ((choice=menu())!=0)
     {
       switch (choice)
       {
       case 1:
         acceptDateFromConsole(&d1);
         break;
         case 2:
          printDateOnConsole(&d1);
          break;
       default:
            printf("Wrong Choice...");
         break;
       }
     }
     
     
     
   }