#include<iostream>
using namespace std;
int main()
{
	int marks[5],i,sum=0;
	cout<<"Enter marks of 5 students: "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>marks[i];
		sum=sum+marks[i];	
	}
	cout<<"Average of 5 students is: "<<sum/5;
}