#include<iostream>
using namespace std;

class time
{
	public: 
	int hours,minute;
	void settime(int hh,int mm)
	{
		hours=hh;
		minute=mm;
	}
	void showtime()
	{
		cout<<"Hours: "<<hours<<endl;
		cout<<"Minute: "<<minute<<endl;
	}
	time sum(time r)
	{
		time x;
		x.hours=hours+r.hours;
		x.minute=minute+r.minute;
		return x;
	}
};
int main()
{
	time a,b,c;
	a.settime(2,40);
	b.settime(3,40);
	c=a.sum(b);
	c.showtime();
}