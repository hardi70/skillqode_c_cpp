#include<iostream>
using namespace std;
int main()
{
	int h=1,n,j;
	cout<<"enter n :";
	cin>>n;
	for(j=1;j<=n;j*=2,h++)
	{
		cout<<"\t "<<j*h;
	}
	
}