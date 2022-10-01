#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10;
	for(i=6;i>=1;i--)
	{
		for(j=6;j<=sp;j++)
			cout<<" ";
		for(j=6;j>=i;j--)
		{
			cout<<" "<<j;
		}
		sp--;
		cout<<"\n";
	}
	for(i=2;i<=6;i++)
	{
		for(j=4;j<=sp;j++)
			cout<<" ";
		for(j=6;j>=i;j--)
		{
			cout<<" "<<j;
		}
		sp++;
		cout<<"\n";
	}

	return 0;

}