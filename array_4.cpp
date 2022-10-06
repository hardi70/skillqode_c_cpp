#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i,j=0;
	for(i=0;i<10;i++)
	{
		cout<<"enter i:";
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
			if(a[i]%2==0)
			{
				cout<<"\n a[i] :"<<i,a[i];
				j=j+a[i];
			}
	}
	cout<<"\n odd element total :"<<j;
	return 0;

}