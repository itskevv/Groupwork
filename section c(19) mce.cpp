#include<iostream>
using namespace std;
class student
{
	int math,phy,vb,wd,cpp;
	public:
		int sum;
		string name;
		float mean,per;
		void getmarks()
		{
			cout<<"Enter your name: ";
			cin>>name;	
			cout<<"Enter marks: math,phy,vb,wd,cpp: "<<endl;
			cin>>math>>phy>>vb>>wd>>cpp;
		}
		friend void grader(student &);
		friend void display(student &);
};
void grader(student &k)
{
	k.sum=k.math+k.vb+k.wd+k.phy+k.cpp;
	k.mean=k.sum/5;
	k.per=(k.sum*100)/500;
}
void display(student &k)
{
	cout<<k.name<<endl;
	cout<<"Percentage: "<<k.per;
}
int main()
{
	int i,no;
	student k[100];
	cout<<"Number of students: ";
	cin>>no;
	for(i=0;i<no;i++)
	{	
		k[i].getmarks();
		grader(k[i]);
		display(k[i]);
	}
}