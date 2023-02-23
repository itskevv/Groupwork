#include<iostream>
using namespace std;
class student
{
	int admno;
	char sname[20];
	float eng,math,science,total;
	float ctotal()
	{
		total=eng+math+science;
		return total;
	}
	public:
		int i,no;
		void takedata()
		{
			cout<<"Administration number: ";
			cin>>admno;
			
			cout<<endl<<"How long is your name: ";
			cin>>no;
			cout<<"Surname: "<<endl;
			for(i=0;i<no;i++)
			{
				cin>>sname[i];
			}
			cout<<"English: ";
			cin>>eng;
			cout<<"Math: ";
			cin>>math;
			cout<<"Science: ";
			cin>>science;
		}
		void showdata()
		{
			cout<<endl<<endl;
			cout<<"Administration number: "<<admno<<endl;
			cout<<"Name: ";
			for(i=0;i<no;i++)
			{
				cout<<sname[i];
			}
			cout<<endl<<"English: "<<eng;
			cout<<endl<<"Math: "<<math<<endl;
			cout<<"Science: "<<science<<endl;
			cout<<"The total is: "<<ctotal();
		}
	
};
int main()
{
	student stu;
	stu.takedata();
	stu.showdata();
}