#include<iostream>
#include<conio.h>
using namespace std;
class Trial
{
	int a,b;
	public:
		Trial()
		{
			a=0;
			b=0;
		}
		void disp()
		{
			cout<<"A: "<<a<<" B: "<<b<<endl;
		}
		void raise()
		{
			a+=10;
			b+=10;
		}
		void down()
		{
			a-=5;
			b-=5;
		}
};
int main()
{
	Trial T;
	T.disp();
	
	T.raise();
	T.disp();
	
	T.down();
	T.disp();
}