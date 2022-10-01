#include <iostream>
using namespace std;
class Student
{
    int i, eng, maths, envir, rollno, total;
    float per;
    char grede;

public:
    void setVal()
    {

        cout << "\n Enter  Rollno :";
        cin >> rollno;
        cout << "\n Enter  Eng : ";
        cin >> eng;
        cout << "\n Enter  maths :";
        cin >> maths;
        cout << "\n Enter  Envir :";
        cin >> envir;
    }
    void calcData()
    {
        cout << "\n Rollno :" << rollno;
        cout << "\n Eng :" << eng;
        cout << "\n Maths :" << maths;
        cout << "\n Envir :" << envir;
    }
    void doSum()
    {
        total = eng + maths + envir;
        cout << "\n Total :" << total;
        per = total / 3;
        cout << "\n Per :" << per;
        if (per > 90)
        {
            grede = 'A';
        }
        else if (per > 75)
        {
            grede = 'B';
        }
        else if (per > 60)
        {
            grede = 'C';
        }
        else if (per > 35)
        {
            grede = 'D';
        }
        else if (per <= 35)
        {
            grede = 'F';
        }
        cout << "\n grade :" << grede;
    }
};
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
    Student obj1;
    obj1.setVal();
    obj1.calcData();
    obj1.doSum();
    }
}