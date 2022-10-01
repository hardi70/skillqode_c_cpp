#include<stdio.h>
int main()
{
  int i,j,k;
  char str1[100],str2[100];

  printf("\n Enter string :");
  gets(str1);
  
  for(i=0;str1[i]!='\0';i++);
  printf("\n string length = %d",i);
  k=i-1;
  for(j=0;j<=i;j++)
  {
    str2[j]=str1[k];
    k--;
  }
  printf("\n reverse string =%s",str2);

  i=0;
  if(str1[i]>str2[i]||str1[i]<str2[i])
  {
	printf("\n not palindrom");

  }
 else
 {
	printf("\n palindrom");
 }
 return 0;
}