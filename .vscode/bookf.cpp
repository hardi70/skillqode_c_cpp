#include<iostream> 
using namespace std; 
class Book 
{ 
    int bookno; 
    string booktitle; 
    float price,totalcost; 
    public: 
    void BookNo() 
    { 
        cout<<"Enter Book No :"; 
        cin>>bookno; 
    } 
    void BookTitle() 
    { 
        cout<<"Enter Book Title :"; 
        cin>>booktitle; 
    } 
    void BookPrice() 
    { 
        cout<<"Enter Book Price :"; 
        cin>>price; 
    } 
    void TotalCost() 
    { 
         
        totalcost=bookno*price; 
    } 
    void FeedInfO() 
    { 
        cout<<"\nBook No    : "<<bookno; 
        cout<<"\nBook Title :"<<booktitle; 
        cout<<"\nBook Price : "<<price; 
        cout<<"\nTotal cost : "<<totalcost; 
    } 
 
 
}; 
int main() 
{ 
Book book1; 
book1.BookNo(); 
book1.BookTitle(); 
book1.BookPrice(); 
book1.TotalCost(); 
book1.FeedInfO(); 
}