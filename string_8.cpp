#include<stdio.h>
#include<string.h>
int main()
{
  int i,j;
  char str1[100],str2[100];

  printf("\n enter string 1 :");
  gets(str1);
  
  int len=strlen(str1);
  printf("\n len :%d",strlen(str1));

  
  strcpy(str2,str1);
  printf("\n str2 :%s",str2);
  
  strrev(str2);
  printf("\n reverse :%s",str2);

  strcmp(str2,str1);
  printf("\n compare :%d",strcmp(str1,str2));
  if(strcmp(str2,str1)==0)
  {
    printf("\n is string pallindrom");
  }
  else
  {
    printf("\n is not string pallindrom");
  }

  	return 0;
}