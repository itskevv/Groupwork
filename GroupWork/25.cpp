#include<iostream>
using namespace std;

class temperature
{
	public: 
		float fahr;
		float cal;
		void calc()
		{
			cout<<"Enter The fahrenheit degree. ";
			cin>>fahr;
			cal=((fahr-32)*5)/9;
			cout<<fahr<<" in celsius is: "<<cal<<endl;
		}
		
};
int main()
{
	temperature celsius;
	celsius.calc();
}