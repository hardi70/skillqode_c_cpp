#include<iostream>
using namespace std;
int main()
{
	char i='A',j;
    do
    {
        j='A';
        do
        {
            cout<<"\t"<<j;
            j++;
            
        } while(j<=i);
        cout<<"\n";
        i++;
        
     }while(i<='E'); 
    
}