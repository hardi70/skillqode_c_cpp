#include<iostream>
using namespace std;
int main()
{
  //    r  cr  c
  int a[5][5],b[5][5],total[1][1];
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
    printf("\n");
  }
  printf("\n");

  printf(" A  ");
  total[i][j]=a[0][0]+a[0][1]+a[0][2]+a[1][0]+a[1][1]+a[1][2]+a[2][0]+a[2][1]+a[2][2];
  printf("total[i][j]=%d",total[i][j]);
  
  printf("\t ");
  printf(" B  ");  
  total[i][j]=b[0][0]+b[0][1]+b[0][2]+b[1][0]+b[1][1]+b[1][2]+b[2][0]+b[2][1]+b[2][2];
  printf("total[i][j]=%d",total[i][j]);
    
  printf("\n");  
  return 0;  
}