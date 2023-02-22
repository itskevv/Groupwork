#include<iostream>
using namespace std;
class circle
{
	private:
		float radius;
	public:
		void getdata()
		{
			cout<<"Enter the radius: ";
			cin>>radius;
		}
		float area();
};
float circle::area()
{
	return (3.14*radius*radius);
}
int main()
{
	circle t;
	t.getdata();
	cout<<"Area_circle: "<<t.area();
}