#include<iostream>
using namespace std;
int main()
{
	int a[10],j=0,j1=0;
	int i,total;
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
				j+=a[i];
			}
	}
	for(i=0;i<10;i++)
	{
			if(a[i]%2==1)
			{
				cout<<"\n a[i] :"<<i,a[i];
				j1+=a[i];
			}
	}
	printf("\n\n total even =%d \n total of odd =%d",j+=0,j1+=0);
	total=j+j1;
	cout<<"\n total :"<<total;


	 
	for(i=0;i<10;i+=2)
	{
			cout<<"\n a[i] :"<<i,a[i];
			j+=a[i];
	}
	for(i=1;i<10;i+=2)
	{
			cout<<"\n a[i] :"<<i,a[i];
			j1+=a[i];
	}
	printf("\n\n total even =%d \n total of odd =%d",j+=0,j1+=0);
	total=j+j1;
	cout<<"\n total :"<<total;
	return 0;

}