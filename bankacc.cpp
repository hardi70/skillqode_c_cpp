 #include<iostream> 
using namespace std; 
class Bank 
{ 
    int accBalance,withdrawal,Deposite; 
    public:
     Bank(); //function declaration
      Bank(int initBal);//function declaration
      void showAccountBalance(); //function declaration
      void  accWithdrawal(); //function declaration
      void  accDeposite(); //function declaration
};
//functon defination
    Bank::Bank() 
    { 
        accBalance=1000; 
        cout<<"\n Default Constructor Called..."; 
        cout<<"\n Withdrawal :"; 
        cin>>withdrawal; 
 
    } 
    //functon defination
    Bank::Bank(int initBal) 
    { 
        accBalance=initBal; 
    } 
    //functon defination
     void Bank::showAccountBalance() 
    { 
        cout<<"\n AccountBalance :"<<accBalance; 
    } 
    //functon defination
    void Bank::accWithdrawal() 
    { 
        cout<<"\n  Withdrawal:"; 
        cin>>withdrawal; 
    }
    //functon defination
    void  Bank::accDeposite() 
    { 
        cout<<"\n Withdrawal :"<<withdrawal; 
        Deposite=accBalance-withdrawal; 
        cout<<"\n Deposite :"<<Deposite; 
        
         
    }  
int main() 
{ 
    Bank Person1(10000); 
    Person1.showAccountBalance(); //function call
    Person1.accWithdrawal(); //function call
    Person1.accDeposite(); //function call
    //Person1.showAccountBalance(); 
  // Person2.showAccountBalance(); 
    //Person3.showAccountBalance(); 
}