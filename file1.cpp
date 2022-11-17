//this file is write file
//of streamstream class to write on file
//if stream:stream class to read from file
//fstream:stream class to both and write from/to file.

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("file1.txt");
    if (filestream.is_open())
    {
        filestream<<"Welcome To Skillqode..";
        filestream<<"\n After Exam";

        filestream.close();
    }
    else
    cout<<"File Opening is Fail.";
    return 0;
}