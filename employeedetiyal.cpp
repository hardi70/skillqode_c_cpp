#include<iostream> 
using namespace std; 
class Employee
{ 
    int hours,x,days=22,salary; 
    string employee; 
    public: 
    void employeeDetails();
    void showEmployeeSalary(); 
    void showTotalDetails(); 
};
    void Employee:: employeeDetails()
    { 
        cout<<"employee Name :"; 
        cin>>employee; 
        cout<<"\n employee Salary :"; 
        cin>>x; 
        cout<<"\n Working Hours :"; 
        cin>>hours; 
    } 
    void Employee::showEmployeeSalary() 
    { 
        cout<<"\n employee Name :"<<employee;
    } 
    void Employee::showTotalDetails() 
    { 
         
        if(hours>8) 
        { 
            salary=x*hours*days; 
            cout<<"\nSalary        :"<<salary; 
            salary=x*hours*days*2; 
            cout<<"\nSalary+Bounus :"<<salary; 
        } 
        else 
        { 
            salary=x*hours*days; 
            cout<<"\nSalary        :"<<salary; 
        } 
        cout<<"\n*******************************"; 
 
    }
int main() 
{ 
   Employee obj1; 
    obj1.employeeDetails(); 
    obj1.showEmployeeSalary(); 
    obj1.showTotalDetails(); 
}