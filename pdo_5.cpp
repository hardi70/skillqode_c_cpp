#include<iostream>
using namespace std;
int main()
{
	int i=5,j;
	do
	{
		j=5;
		do
		{
			cout<<"\t"<<j;
			j--;
		}while(j>=i);
	cout<<"\n";
	i--;
	}while(i>=1);
	

}