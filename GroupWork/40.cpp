#include<iostream>
using namespace std;
class shape
{
	public: 
		void disp()
		{
			cout<<"This is a shape. "<<endl;
		}
};
class polygon: public shape
{
	public:
		void disp()
		{
			cout<<"Polygon is a shape. "<<endl;
		}
};
class rectangle: public shape
{
	public:
		void disp()
		{
			cout<<"Rectangle is a polygon. "<<endl;
		}
};
class triangle: public shape
{
	public:
		void disp()
		{
			cout<<"Triangle is a polygon. "<<endl;
		}
};
class square:public shape
{
	public:
		void disp()
		{
			cout<<"Square is a rectangle. "<<endl;
		}
};
int main()
{
	shape sh;
	sh.disp();
	
	polygon pl;
	pl.disp();
	
	rectangle rect;
	rect.disp();
	
	triangle tr;
	tr.disp();
	
	square sq;
	sq.disp();
}