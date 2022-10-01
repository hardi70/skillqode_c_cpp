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
			cout<<"\t"<<i,j;
			j++;	

		}while(j<=4);
	cout<<"\n";
	i=i+2;
	}while(i<=9);

}