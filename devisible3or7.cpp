#include<iostream>
using namespace std;
int main()
{
    int h,m,c;
    cout<<"\n enter h:";
    cin>>h;
    cout<<"\n enter m:";
    cin>>m;
    c=h*m;
    if(c%21==0)
    {
        cout<<"\n num devisible by 3 or 7:";
    }
    else
    {
        cout<<"\n num is not devisible by 3 or 7:";
    }


}