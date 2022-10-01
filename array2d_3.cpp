#include<iostream>
using namespace std;
int main()
{
  //    r  c   
  int a[5][5],total[3][3];
  int i,j,x=0,y=0,z=0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {     
      printf("enter a[%d][%d] :",i,j);
      scanf("%d",&a[i][j]);
    }
  }

  printf("\n");
  printf("\n your Matrix is \n\n");
  printf("\n\t\t A \n");
    
for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {  
      printf("\t %d",a[i][j]);
    }
    for(j=0;j<3;j++)
    {  
      if(i==j)
      {
        x=x+a[i][j];
      }
      else if(j>i)
      {
        y=y+a[i][j];
      }
      else
      {
        z=z+a[i][j];
      }
    }
    printf("\n");
  }
  
  printf("\n daigonal total : %d+%d+%d = %d",a[0][0],a[1][1],a[2][2],x);
  printf("\n upper total : %d+%d+%d = %d",a[0][1],a[0][2],a[1][2],y);
     printf("\n lower total : %d+%d+%d = %d",a[1][0],a[2][0],a[2][1],z);
  printf("\n");
  return 0;  
}