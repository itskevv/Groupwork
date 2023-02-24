#include<iostream>
using namespace std;
class Mammals
{
	public:
		void disp()
		{
			cout<<"I am mammal. "<<endl;
		}
};
class MarineAnimals
{
	public: 
		void disp()
		{
			cout<<"I am marine animal. "<<endl;	
		}	
			
};
class BlueWhale:public Mammals,public MarineAnimals
{
	public: 
		void disp()
		{
			cout<<"I belong to both the categories: Mammals as well as Marine Animals"<<endl;
		}
	
};
int main()
{
	Mammals Mammal;
	MarineAnimals MarineAnimal;
	BlueWhale bluewhale;
	Mammal.disp();
	MarineAnimal.disp();
	bluewhale.disp();
	cout<<endl<<endl;
	
	cout<<"Now using bluewhale object. "<<endl;
	bluewhale.disp();
	bluewhale.disp();
	bluewhale.disp();
}