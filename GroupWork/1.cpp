#include<iostream>
using namespace std;
class rectangle
{
	int l,w;
	public: 
		void set_values()
		{
			cout<<"Length: ";
			cin>>l;
			cout<<"Width: ";
			cin>>w;
		}
		float area()
		{
			return l*w;
		}
};
int main()
{
	rectangle rect;
	rect.set_values();
	cout<<"Area of the rectangle: "<<rect.area();
}