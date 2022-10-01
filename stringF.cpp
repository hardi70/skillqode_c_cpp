#include<iostream>
#include<string>
using namespace std;
void mystring(string newStr)
{
    cout<<"Hello, "<<newStr<<"Welcome to skill qode!\n";

}
int main()
{
    string str;
    cout<<"please enter your name:\n";
    //cin>>str;
    // cout<<"\n str :"<<str;
    getline(cin, str);
    mystring(str);
    return 0;

}