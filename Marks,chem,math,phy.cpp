#include<iostream>
using namespace std;

class Marks
{
	public:
		int phy,chem,math;
		int roll_no=0,marks;
		string name;
};
class phyics: public Marks
{
	public:
		int getphy()
		{
			cout<<"Physics: ";
			cin>>phy;
			return phy;
		}
};
class chemistry: public Marks
{
	public: 
		int getchem()
		{
			cout<<"Chemistry: ";
			cin>>chem;
			return chem;
		}
};
class mathematics: public Marks
{
	public: 	
		int getmath()
		{
			cout<<"Mathematics: ";
			cin>>math;
			return math;
		}
};
int main()
{
	phyics p[100];
	mathematics m[100];
	chemistry c[100];
	Marks ma[100];
	int phy[100];
	int mth[100];
	int che[100];
	int i,no,t_avg=0;
	cout<<"Enter number of students: ";
	cin>>no;
	for(i=0;i<no;i++)
	{
		cout<<"Name: ";
		cin>>ma[i].name;
		phy[i]=p[i].getphy();
		mth[i]=m[i].getmath();
		che[i]=c[i].getchem();
		ma[i].marks=phy[i]+mth[i]+che[i];
		t_avg=t_avg+ma[i].marks;
		ma[i].roll_no=ma[i].roll_no+i;
		cout<<endl<<endl;
	}
	for(i=0;i<no;i++)
	{
		cout<<"Your name: "<<ma[i].name<<endl;
		cout<<"Roll number: "<<ma[i].roll_no<<endl;
		cout<<"Your marks: "<<ma[i].marks<<endl;
	}
		cout<<"Total average of the class: "<<t_avg/no;
}
