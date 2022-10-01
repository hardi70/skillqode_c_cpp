#include<iostream>
using namespace std;
int main()
{
	int i=1,j;
	int a=65;
	do
	{
		j=1;
		do
		{
			if(i%2==0)
			cout<<"\t"<<(char)(a+32);
			else
			cout<<"\t"<<(char)(a);
			a++;
			j++;
		}while(j<=i);
	cout<<"\n";
	i++;
	}while(i<=5);
	

}