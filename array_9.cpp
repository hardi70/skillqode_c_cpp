#include<iostream>
using namespace std;
int main()
{
	int i,rollno[5];
	int m1[5],m2[5],m3[5],total[5];
	float per[5];
	char gra[5];
	for(i=0;i<5;i++)
	{
		cout<<"\n enter rollno[i] :";
		cin>>rollno[i];

		cout<<"\t enter m1:";
		cin>>m1[i];
		cout<<"\t enter m2:";
		cin>>m2[i];
		cout<<"\t enter m3:";
		cin>>m3[i];
	}
	cout<<"rollno \tm1 \tm2 \tm3 \ttotal \tper \tgra";
	for(i=0;i<5;i++)
	{

		total[i]=m1[i]+m2[i]+m3[i];
		per[i]=total[i]/3;
               
			if(per[i]>75)
			{
				gra[i]='A';
			}
			else if(per[i]>65 && per[i]<75)
			{
				gra[i]='B';
			}
			else if(per[i]>50  && per[i]<65)
			{
				gra[i]='C';
			}
			
			else if(per[i]>35  && per[i]<50)
			{
				gra[i]='D';
			}
			else
			{
				gra[i]='F';
			}


		printf("\n%d \t%d \t%d \t%d \t%d \t%.2f \t%c",rollno[i],m1[i],m2[i],m3[i],total[i],per[i],gra[i]);
	}
	printf("\n");

	
     return 0;
}