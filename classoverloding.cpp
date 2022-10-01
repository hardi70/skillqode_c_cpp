//construvtor overloding
#include<iostream>
using namespace std;
class Sum{
    public:
    Sum(int,int);
    Sum(int,int,int);
    Sum(double,double);
    Sum(double,double,double);
    
};
Sum::Sum(int a,int b){
    cout<<"tow para int a+b:"<<a+b<<endl;
}
Sum::Sum(int a,int b,int c){
    cout<<"three para int a+b+c:"<<a+b+c<<endl;
}
    Sum::Sum(double a,double b){
        cout<<"tow para double a+b:"<<a+b<<endl;
    }
    Sum::Sum(double a,double b,double c){
        cout<<"three para double a+b+c:"<<a+b+c<<endl;
    }
int main()
{
    Sum ob1(10,30,40);//,ob2(10.5,20.5),ob3(10,20,30),ob4(10.1,20.1,30.1);
}