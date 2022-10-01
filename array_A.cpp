#include<iostream>
using namespace std;
int main()
{
	int a[5],b[5],c[5];
	int i,j,k;
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
	for(k=0;k<5;k++)
	{
		cout<<" enter c[k]:";
		cin>>c[k];
	}
	printf("\n your array is \n \n");
printf("  a  \t  b  \t   c  \ttotal");
	for(i=0;i<5;i++)
	{
		cout<<"\n "<<a[i];
		cout<<"\t "<<b[i];
		cout<<"\n "<<c[i];
		cout<<"\t "<<(int)(a[i]+b[i]+c[i]);
	}
		

	return 0;

}