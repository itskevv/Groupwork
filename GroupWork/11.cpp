#include<iostream>
using namespace std;

class num
{
	public:
		int a,b,sum;
		num(int aa,int bb)
		{
			a=aa;
			b=bb;
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
		}
};
int main()
{
	int x,y;
	cout<<"X and Y: ";
	cin>>x>>y;
	num a(x,y);
	num	b(a);
}