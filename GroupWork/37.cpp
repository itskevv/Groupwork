#include<iostream>
using namespace std;
class Apples
{
	public: 
		int apples;	
		void getapp()
		{
			cout<<"Apples: ";
			cin>>apples;
		}
};
class Mangoes
{
	public:
		int mangoes;
		void getman()
		{
			cout<<"Mangoes: ";
			cin>>mangoes;
		}
};
class fruit: public Mangoes,public Apples
{
	public:
		void frui()
		{
			cout<<"There are "<<apples<<" apples in the basket. "<<endl;
			cout<<"There are "<<mangoes<<" mangoes in the basket. "<<endl;
			cout<<"Total number of fruits in the basket are: "<<mangoes+apples;
		}
};
int main()
{
	fruit f;
	f.getapp();
	f.getman();
	f.frui();
}