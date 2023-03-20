#include<iostream>
using namespace std;

class num
{
	public:
		int a,b,sum;
		num()
		{
			cout<<"Enter two numbers: ";
			cin>>a>>b;
		}
		~num()
		{
			sum=a+b;
			cout<<"The sum is: "<<a+b<<endl;
		}
		num(const num &n)
		{	
			a=n.a*3;
			b=n.b*3;
			cout<<a+b;
		}
};
int main()
{
	num a;
	num b(a);
}
