#include<iostream>
using namespace std;
class result
{
	public:
		int math,phy,wd,cpp,vb;
		string name,s_name;
		float sum,mean,per;
		void readident()
		{
			cout<<"Enter your name and last name: ";
			cin>>name>>s_name;
		}
		void readmarks(int a,int b, int c,int d,int e)
		{                  
			
			math=a;
			phy=b;
			wd=c;
			cpp=d;
			vb=e;
			cout<<"It is out of 50!!!!!!!"<<endl;
			cout<<"Math: ";
			cin>>math;
			cout<<"Physics: ";
			cin>>phy;
			cout<<"Web design: ";
			cin>>wd;
			cout<<"C++ Programming: ";
			cin>>cpp;
			cout<<"Visual Basic: ";
			cin>>vb;
		}
		void calculate()
		{
			sum=math+phy+vb+wd+cpp;
			mean=sum/5;
			per=(sum*100)/250;
		}
		void display();
		
};
void result::display()
{
	cout<<"Names are: "<<name<<" "<<s_name<<endl;
	cout<<"Math: "<<math<<"/50";
	cout<<endl<<"Physics: "<<phy<<"/50"<<endl;
	cout<<"C++ Programming: "<<cpp<<"/50"<<endl;
	cout<<"Web design: "<<wd<<"/50"<<endl;
	cout<<"Visual Basic: "<<vb<<"/50"<<endl;
	cout<<"SUM: "<<sum<<"/250"<<endl;
	cout<<"MEAN: "<<mean<<endl;
	cout<<"Percentage: "<<per<<"%"<<endl;
}
int main()
{
	int a,b,c,d,e;
	result test;
	test.readident();
	test.readmarks(a,b,c,d,e);
	test.calculate();
	test.display();
}