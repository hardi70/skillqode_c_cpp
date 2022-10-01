#include<iostream>
using namespace std;
int main()
{
	float unit[5],amount[5],total[5],totalamount[5];
	int i;
	for(i=0;i<1;i++)
	{
		cout<<"\n enter unit:";
		cin>>unit[i];
	}
	if(unit[i]<=100)
	{
		amount[i]=(unit[i]*0.6+50);
		cout<<"\n amount[i] = "<<(float)(amount[i]);
	}
	else if(unit[i]<=200 && unit[i]<=100)
	{
		amount[i]=(unit[i]*0.6)+(unit[i]*0.80)+50;
		cout<<"\n amount[i] = "<<(float)(amount[i]);
	}
	else if(unit[i]<=300 && unit[i]<=200)
	{
		amount[i]=(100*0.60)+(200*0.80)+50;
		cout<<"\n amount[i] = "<<(float)(amount[i]);
	}
	total[i]=amount[i];
	cout<<"\n total[i]="<<total[i];
	if(totalamount[i]<=300 && totalamount[i]<=200 )
	{
		totalamount[i]=(total[i]*1.15);
	}
	else
	{
		cout<<"\n totalamount[i] = "<<(float)(totalamount[i]);
	}
	
	return 0;

}