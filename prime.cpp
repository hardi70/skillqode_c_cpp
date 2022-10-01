#include <iostream>
using namespace std;
int mymain() 
{
  int x,i,y=0,z=0;
  
  
  y=x/2;
    for(i=2;i<=y;i++)
    {
        if(x%i==0)
        {
               cout<<"\n number is not prime : ";
           z=1;
         break; 
        }   
       
    }
    if(z==0)
    
      cout<<"\n number is prime."<<endl;
}
int main()
{
    int x;
    cout<<"\n enter the number to check prime : ";
    cin>> x;
  
  mymain();

}