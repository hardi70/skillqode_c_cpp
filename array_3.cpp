#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i,j=0;
	for(i=0;i<10;i++)
	{
		printf("enter i:");
		scanf("%d",&a[i]);                
	}
	for(i=0;i<10;i++)
	{
			printf("\n a[%d] :%d",i,a[i]);
			j=j+a[i];
	}
	printf("\n all element total :%d",j);
	return 0;

}