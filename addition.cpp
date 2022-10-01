#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"\n enter a:";
    cin>>a;
     cout<<"\n enter b:";
    cin>>b;

    c=a*b;
    cout<<"\n a*b "<<c;

    d=a+b;
    cout<<"\n a+b "<<d;
    if(c%d==0)
    {
        cout<<"its divisible :";

    }
    else
    {
        cout<<"its not divisible :";

    }


}