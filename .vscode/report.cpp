#include<iostream>
using namespace std;
class Report
{
    int adno,sci,maths,eng,total,z;
    string name;
    float mark,average;
    private:

    public:
    void READINFO()
    {
        cout<<"Eter Admi No :";
        cin>>adno;
        cout<<" Enter Name :";
        cin>>name;

    } 
    void GETVAG()
    {   
        cout<<"Enter Maths:";
        cin>>maths;
        cout<<"Enter Eng:";
        cin>>eng;
        cout<<"Enter SCI:";
        cin>>sci;
        total=eng+maths+sci;
        cout<<"Total :"<<total<<endl;
        
    }
    void DISPLAYINFO()
    {
        z=total/3;
        cout<<" Avaregeg mark :"<<z;
       
    }
    

};
int main()
{
    Report ob1;
    ob1.READINFO();
    ob1.GETVAG();
    ob1.DISPLAYINFO();
}