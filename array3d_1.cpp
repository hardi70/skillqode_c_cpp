#include<iostream>
using namespace std;
int main()
{
  //    r  c    r  c
  int a[5][5],b[5][5],c[5][5],total[1][1];
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {     
      printf("enter a[%d][%d] :",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  
  printf("\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("enter b[%d][%d] :",i,j);
      scanf("%d",&b[i][j]);  
    }
  }
	printf("\n");
   for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {     
      printf("enter c[%d][%d] :",i,j);
      scanf("%d",&c[i][j]);
    }
  }
  printf("\n");
  printf("\n your Matrix is \n\n");
  
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("\t %d",a[i][j]);
    }  
    for(j=0;j<3;j++)
    {
      printf("\t %d",b[i][j]);
    }
	 for(j=0;j<3;j++)
    {
      printf("\t %d",c[i][j]);
    }
    printf("\n");
  }
 
	return 0;
}







