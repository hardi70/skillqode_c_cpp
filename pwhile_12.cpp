#include<iostream>
using namespace std;
int main()
{
	int i=0,n=4,j;
	while(i<=n)
	{
		j=i;
		while(j>=0)
		{
			cout<<"\t"<<(char)(j+65);
			j--;
		}
	cout<<"\n";
	i++;
	}

}