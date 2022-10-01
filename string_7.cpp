#include<stdio.h>
int main()
{
  int i,j,k,h;
  char str1[100],str2[100];

  printf("\n Enter string :");
  gets(str1);
  
  for(h=0;str1[h]!='\0';h++);  
  printf("\n string length =%d",h);
  k=h-1;
  for(j=0;j<h;j++)
  {
    str2[j]=str1[k--];
    printf("\n %c  - %c",str1[j],str2[j]);
  }
  str2[j]='\0';
  printf("\n");
  printf("\n reverse string =%s",str2);

  int fl;
  for(i=0;i<h;i++)
  {
    if(str1[i]==str2[i])
    {
      fl=0;
    }
    else
    {
      fl=1;
      break;
    }
  }
    if(fl==0)
    {
      printf("\n");
      printf("\n palindrom");
    }
    else
    {
      printf("\n");
      printf("\n not palindorn");
    }
    printf("\n");
  return 0;
}