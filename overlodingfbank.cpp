#include<iostream> 
using namespace std; 
class Bank 
{ 
    int accBalance,withdrawal,Deposite; 
    public:
     Bank(); 
      Bank(int initBal);
      void showAccountBalance();
      void  accWithdrawal(); 
      void  accDeposite(); 
};
    Bank::Bank() 
    { 
        accBalance=1000; 
        cout<<"\n Default Constructor Called..."; 
        cout<<"\n Withdrawal :"; 
        cin>>withdrawal; 
 
    } 

    Bank::Bank(int initBal) 
    { 
        accBalance=initBal; 
    } 

     void Bank::showAccountBalance() 
    { 
        cout<<"\n AccountBalance :"<<accBalance; 
    } 

    void Bank::accWithdrawal() 
    { 
        cout<<"\n  Withdrawal:"; 
        cin>>withdrawal; 
    }

    void  Bank::accDeposite() 
    { 
        cout<<"\n Withdrawal :"<<withdrawal; 
        Deposite=accBalance-withdrawal; 
        cout<<"\n Deposite :"<<Deposite; 
        
         
    }  
int main() 
{ 
    Bank Person1(10000); 
    Person1.showAccountBalance();
    Person1.accWithdrawal();
    Person1.accDeposite();
    //Person1.showAccountBalance(); 
  // Person2.showAccountBalance(); 
    //Person3.showAccountBalance(); 
}