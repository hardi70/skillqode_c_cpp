#include<iostream>
using namespace std;
int main()
{
	int i=1,j;
	char n=65;
	do
	{
		j=1;
		do
		{
			cout<<"\t"<<(char)(n++);
			j++;
		
		}while(j<=i);
	cout<<"\n";
	i++;
	}while(i<=5);
	

}