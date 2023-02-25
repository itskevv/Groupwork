#include<iostream>
using namespace std;
class Distance
{
	public:
		int feet;
		float inches;
		
		void set(int f,float i)
		{
			feet=f;
			inches=i;
		}
		void disp()
		{
			cout<<"Distance is: "<<feet<<" in feet and "<<inches<<" in inches. "<<endl;
		}
		Distance add(Distance r)
		{
			Distance x;
			x.feet= feet+ r.feet;
			x.inches= inches+r.inches;
			
			return x;
		}
};
int main()
{
	Distance a,b,c;
	a.set(6,5.0);
	b.set(6,5.1);
	c=a.add(b);
	c.disp();
	
	
	
}