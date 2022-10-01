#include<iostream>
using namespace std;
int main()
{
	int i=1,j;
	do
	{
		j=1;
		do
		{
			cout<<"\t"<<j;
			j++;
		}while(j<=i);
	cout<<"\n";
	i++;
	}while(i<=5);
	

}