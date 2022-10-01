#include<iostream>
#include<string>
using namespace std;
int main()
{
  int i,j,k;
  char str1[12],str2[12];

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
}