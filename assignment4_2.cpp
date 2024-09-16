/*Q3. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using 
Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not 
given, allocate stack of size 5. 
Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().*/
#include<iostream>
using namespace std;
class Stack{
             
             int size;
             int top;
             int *ptr;
             int element;
public :
            Stack(int size)
                {
                this->size=size;
                top=-1;
                // ptr=new int[size];
                }
          void   push(int element){
                ptr[++top]=element;
            }
        void pop(){
                   top--;   
        }
        int peek(){

            return ptr[top];

        }

         void    print(){
            for(int i=top;i>=0;i--){
                
                cout<<ptr[i]<<endl;
            }

            }
};
int main(){
 Stack stack(5);

 stack.push(5);
 stack.push(4);
 stack.push(14);
 
 stack.push(40);
 
 stack.push(44);
 stack.push(64);
 stack.push(98);
 stack.print();
 
 stack.pop();
 stack.print();
 
cout<<"peek value is :"<<stack.peek()<<endl;
 



    return 0;
}
