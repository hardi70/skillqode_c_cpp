#include<iostream>
using namespace std;
class Bank
{
    int amount=10000,a,cash,balance;
    public:
    void deposite()
    {
        cout<<"Enter deposite value : "<<endl;
        cin>>a;
        amount=amount+a;
        cout<<"your deposite amount is : "<<amount<<endl;
    }
    void withdraw()
    {
        cout<<"Enter withdraw value : "<<endl;
        cin>>cash;
        if(amount<cash)
        {
            cout<<"you dont have this money -> "<<endl;
            cout<<"because your balance is : " " "<<amount<<endl<<endl;
        }
        else
        {
            balance=amount-cash;
            cout<<"withdraw after balance : "<<balance<<endl;
        }
    }
    void showbalance()
    {
        balance=amount;
        cout<<"your balnce is : "<<balance<<endl;
    }
};
int main()
{
    Bank a;
    int ch;
        
        cout<<endl<<"1. deposite amount  "<<endl;
        cout<<"2. withdraw amount  "<<endl;
        cout<<"3. show balance  "<<endl<<endl;

        cout<<"Enter your choice number : "<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
                a.deposite();
                break;
        case 2:
                a.withdraw();
                break;
        case 3:
                a.showbalance();
                break;
        
        }
}