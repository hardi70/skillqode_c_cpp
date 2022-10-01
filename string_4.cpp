#include<iostream>
#include<string>
using namespace std;
int main()
{

  int i,j;
  char str1[72],str2[72];

  printf("\n Enter string :");
  gets(str1);
  
  for(i=0;str1[i]!='\0';i++);
  {
    printf("\n STRING LENGTH IS : %d",i);
  }
  for(j=0;j<=1;j++)
  {
    str2[j]=str1[i];
  }
  printf("\n str2[i] = %s",str1);
  printf("\n");  
}