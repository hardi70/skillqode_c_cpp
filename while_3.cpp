#include<iostream>
using namespace std;
int main()
{
	int n,i=10;
	cout<<"enter n:";
	cin>>n;
	i=-n;
	while(i<=n)
	{
		cout<<"\n"<<i++;
	}
	return 0;
}