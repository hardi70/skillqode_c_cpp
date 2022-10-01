#include<iostream>
using namespace std;
int main()
{
	int i=1,j,a=1;
	do
	{
		j=1;
		do
		{
			if(a%2==1)
			{
			cout<<"\t1";
			a++;
			}
			else
			{
			cout<<"\t0";
			a++;
			}j++;
		}while(j<=i);
	cout<<"\n";
	i++;
	}while(i<=5);
	

}