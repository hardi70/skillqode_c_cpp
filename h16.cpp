#include<iostream>
using namespace std;
int main()
{
  int a=1,b=1,c=1,n,k;
  cout<<"\n enter n :";
  cin>>n;
  cout<<"\t"<<b<<"\t"<<c;
  for(k=1;k<n-1;k=k+2)
  {
    a=b+c;
    b=c;
    c=a;
    cout<<"\t"<<a;
  }
}