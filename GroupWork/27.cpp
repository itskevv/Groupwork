#include<iostream>
using namespace std;
class sum
{
	int x,y,total;
	public:
		sum(int a,int b)
		{
			x=a;
			y=b*2;
		}
		void display()
		{
			total=x+y;
			cout<<total;
		}
};
int main()
{
	sum s(9,5);
	s.display();
	return 0;
}