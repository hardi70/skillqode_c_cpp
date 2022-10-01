#include<iostream>
using namespace std;
int main()
{
	int a[5],b[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		cout<<"enter a[i]:";
		cin>>a[i];
	}
	for(j=0;j<5;j++)
	{
		cout<<" enter b[j]:";
		cin>>b[j];
	}
	cout<<"\n your array is \n \n";
	cout<<"  a  \t  b  \ttotal";
	for(i=0;i<5;i++)
	{
		cout<<"\n "<<a[i];
		cout<<"\t "<<b[i];
		cout<<"\t"<<a[i]+b[i];
	}
		

}