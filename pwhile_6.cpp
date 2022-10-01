#include<iostream>
using namespace std;
int main()
{
	char i='A',j;
	while(i<='E')
	{
		j='A';
		while(j<=i)
		{
			cout<<"\t"<<(char)(j++);
		}
	cout<<"\n";
	i++;
	}
	

}