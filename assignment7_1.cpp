/*Q1.  A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class 
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books. 
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program 
should be menu driven and should not cause memory leakage. */
#include <iostream>
using namespace std;
class Product
{
    int id;
    string title;
    

public:
double price;
    Product()
    {
        id = 0;
        title = " ";
        price = 0;
    }
    Product(int id, string title, double price)
    {
        this->id = id;
        this->title = title;
        this->price = price;
    }

    virtual void accept()
    {
        cout << "Enter the ID : " ;
        cin >> id;
        cout << "Enter The title : ";
        cin >> title;
        cout << "Enter the price : " ;
        cin >> price;
    }
    virtual void display()
    {
        cout << "ID : " << id << endl;
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
    }
};
class Book : virtual public Product
{
    string author;

protected:
    void acceptBook()
    {
        cout << "Enter the Author : " << endl;
        cin >> author;
    }
    void displayBook()
    {
        cout << "Author : " << author << endl;
    }

public:
    Book()
    {
        author = " ";
    }
    Book(int id, string title, double price, string author) : Product(id, title, price)
    {
        this->author = author;
    }
    void accept()
    {
        Product::accept();
        acceptBook();
    }
    void display()
    {
        Product::display();
        displayBook();
    }
};
class Tape : virtual public Product
{
    string artist;

protected:
    void acceptTape()
    {
        cout << "Enter Artist : " << endl;
        cin >> artist;
    }
    void displayTape()
    {
        cout << "Artist : " << artist << endl;
    }

public:
    Tape()
    {
        artist = " ";
    }
    Tape(int id, string title, double price, string artist) : Product(id, title, price)
    {
        this->artist = artist;
    }
    void accept()
    {
        Product::accept();
        acceptTape();
    }
    void display()
    {
        Product::display();
        displayTape();
    }
};



int main()
{

    Product *ptr[3];
    int choice;
    int x;
    int total;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter choice : " << endl;
        cin >> choice;
        if (choice == 0)
        {
            ptr[i] = new Book();
            ptr[i]->accept();
        }
        else
        {
            ptr[i] = new Tape();
            ptr[i]->accept();
        }
    }

    for (int i = 0; i <3; i++)
    {
        if (choice == 0)
        {

            if (typeid(*ptr[i]) == typeid(Book))
                ptr[i]->display();
        }
        else
        {

            // if (typeid(*ptr[i]) == typeid(Tape))
                ptr[i]->display();
        }
    }

    for(int i=0;i<3;i++){
        if(typeid(*ptr[i])==typeid(Book))
        {
            x=ptr[i]->price;
            total=x * 0.05;
        }
        else
        {
            total=x*0.1;
        }

    }
    cout<<"total bill "<<total<<endl;

    // Product p;
    // p.accept();
    // p.display();
    // Book b;
    // b.accept();
    // b.display();
    // Tape t;
    // t.accept();
    // t.display();
}
