#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout<<"base class isinvorked"<<endl;
    }
};
class dervied:public base
{
    public:
    void display()                                       //polymorphism
    {                                                     //
        cout<<"derived class isinvorked"<<endl;            //
    }                                            // compile time          run time
};
int main()
{
    //dervied d;
    //d.display();
    base*p,b;
    dervied d;
    p=&b;           //BASE
    p->display();   ///->point to
    p=&d;           //derived
    p->display();
    //base b;
    //b.display();
}   