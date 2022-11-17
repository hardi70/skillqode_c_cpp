//this file is read file 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string srg;
    ifstream filestream("file2.txt");
    if(filestream.is_open())
    {
        while(getline(filestream,srg))
        {
            cout<<srg<<endl;
        }
        filestream.close();
    }
    else
    {
        cout<<"File Opening is Fail."<<endl;
    }
    return 0;
}