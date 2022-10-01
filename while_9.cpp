#include<iostream>
using namespace std;
int main()
{
	float a=0.5,n,i=0.5;
	cout<<"enter n :";
	cin>>n;
	while(i<=n)
	{
		cout<<"\t"<<a;
		a=a+i;
		i++;
	}
		
}