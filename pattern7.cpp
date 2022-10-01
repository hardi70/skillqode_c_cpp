#include<iostream>
using namespace std;
int main()
{
	char i,j,a=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			cout<<"\t"<<(char)(a+32);
			else
			cout<<"\t"<<a;
			a++;
		}
		cout<<"\n";
	}
	return 0;

}