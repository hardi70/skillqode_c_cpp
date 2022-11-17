//this file is write and read file
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char input[75];
    ofstream os;
    os.open("file3.txt");
    cout<<"Writing To a Text File."<<endl;
    cout<<"Please Enter Your Name    --> ";
    cin.getline(input,100);
    os<<input<<endl;
    cout<<"Please Enter Your Contact --> ";
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();
    ifstream is;
    string line;
    is.open("file3.text");
    cout<<"Reading From a Text File."<<endl;
    while ( getline(is,line))
    {
        cout<<line<<endl;
    }
    is.close();
    return 0;
    
}