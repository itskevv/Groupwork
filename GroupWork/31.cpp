#include<iostream>
using namespace std;
class Rectangle
{
	int width,height;
	public:
		set_values(int,int);
		int area()
		{
			return width*height;
		}
};
int main()
{
	Rectangle rect;
	rect.area();
}