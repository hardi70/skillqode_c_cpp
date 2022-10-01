#include<iostream>
using namespace std;
class Bank
{
    string name;
    int AccBalance;
    public:
    Bank();
    Bank(int); 
    void getAccInfo();
    void showAccountBalance();                   
    void showBankDetails();
};
void Bank::getAccInfo(){
    cout<<"your name please:";
    cin>>name;
}
Bank::Bank()
{   
    AccBalance=1000;
    cout<<"\n default constructor called...";  
}
Bank::Bank(int initBal)
{
    AccBalance=initBal;
    cout<<"\n Duramterieed constructor called...";
} 
void Bank::showAccountBalance(){
    cout<<"\n Account Balance:"<<AccBalance;
}
void Bank:: showBankDetails(){
    cout<<"\n name:"<<name;
    cout<<"\n Account Balance:"<<AccBalance;
}
int main()
{
    Bank parson[3];
    parson[1].getAccInfo();
    parson[1].showAccountBalance();
    parson[1].showBankDetails();

}