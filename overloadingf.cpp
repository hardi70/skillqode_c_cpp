//function overloding
#include<iostream>
using namespace std;
class Area
{
    public:
    void calaArea(int);
    void calaArea(int,int);
    double calaArea(double);
};
void Area::calaArea(int side)
{
    cout<<"\n Area : "<<side*side;
}
void Area::calaArea(int l,int b)
{
    cout<<"\n Area :"<<l*b;
}
double Area::calaArea(double side)
{
    return side*side;
}
int main()
{
    Area square,rect;
    square.calaArea(8);
    cout<<"\n square area is doublue :"<<square.calaArea(7.5);
    rect.calaArea(7,8);
    return 0;
}