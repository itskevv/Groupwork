
#include<iostream>
using namespace std;
int main()
{
	int l,w,*arr,area;
	cout<<"Enter length or width: ";
	cin>>l>>w;
	area=l*w;
	arr=&area;
	cout<<"Area of rectangle is: "<<*arr;
	return 0;
}