#include<iostream>
using namespace std;
class physics
{
	public:
		int phy;
};
class mathematics
{
	public:
		int math;
};
class chemistry
{
	public:
		int chem;	
};
class Marks:public chemistry,public mathematics,public physics
{
	public:
		int roll_no=1,no,marks,i,t_mean=0;
		float avg=0,t_avg=0;
		string name;
		void calculate()
		{
			cout<<"How many students are in the class: ";
			cin>>no;
			for(i=0;i<no;i++)
			{
				cout<<"Enter your name: ";
				cin>>name;
				cout<<"Marks are out of 20!!!!!!"<<endl;
				cout<<"Math: ";
				cin>>math;
				cout<<"Physics: ";
				cin>>phy;
				cout<<"Chemistry: ";
				cin>>chem;
				cout<<endl<<endl;
				marks=chem+phy+math;
				avg=(marks/0.60);				
				t_avg=t_avg+avg;
				cout<<"Name: "<<name;
				cout<<endl<<"Roll no: "<<roll_no+i<<endl;
				cout<<"Total marks: "<<marks;
				cout<<endl<<"Your average is: "<<avg;
				cout<<endl<<endl;
			}
			cout<<endl<<"Average of the class: "<<t_avg/no;
		}
};
int main()
{
	Marks stu;
	stu.calculate();
}