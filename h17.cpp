#include<iostream>
using namespace std;
int main()
{
	float h,n,a=0.5;
	cout<<"enter n :";
	cin>>n;
	for(h=0.5;h<=n;h++)
	{
		cout<<"\t"<<a;
		a=a+h;
	}
	
		
}