#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int b[5];
	int i;
	int j;
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
	for(i=0;i<5;i++)
	{
		cout<<"\n a[i]:"<<i,a[i];
	}
		cout<<"\n your array is \n \n";
	for(j=0;j<5;j++)
	{
		cout<<"\n b[j]:"<<j,b[j];
	}


}