#include <iostream>
#include<string>
using namespace std;
void isvowel(char str[])
{
    int vowels =  0;
    for(int i = 0; str[i]; i++)  
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
        ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
        {
        vowels++;
        }
    }
    cout<<"No of vowel is present: "<<vowels;
}
void mystring()
{
    char str[50];
    //char str[100] = "prepinsta";
   // int vowels = 0;

        cout<<"enter alphabet :";
        cin>>str;
        isvowel(str);
    // can also do str[i] != '\0' in condition below both would work
    // for(int i = 0; str[i]; i++)  
    // {
    //     if(str[i]=='a' str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
    //     ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
    //     {
  //       vowels++;
    //     }
    // }
    
    // cout << "Total Vowels : " << vowels;
    // getline(cin, str);
    
}
int main()
{
    mystring();
}