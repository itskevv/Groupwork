#include<iostream>
using namespace std;
class vehicle
{
	public: 
		int mileage,price;
};
class car:public vehicle
{
	public:
		int own_cost,warranty,seat_capacity,fuel;
};
class bike:public vehicle
{
	public:
		int cylinders,no_gears,cooling_type,wheeltype,fuel_size;
};
class audi: public car
{
	public:
		int audi_type;
		void getdata()
		{
			cout<<"This is an Audi"<<endl;
			cout<<"Audi type: ";
			cin>>audi_type;
			cout<<"Ownership cost: ";
			cin>>own_cost;
			cout<<"Warranty: ";
			cin>>warranty;
			cout<<"Seat Capacity: ";
			cin>>seat_capacity;
			cout<<"Fuel type(diesel or petrol)";
			cin>>fuel;
		}
		void display()
		{
			cout<<"This is an Audi"<<endl<<endl;
			cout<<"Of model: "<<audi_type<<endl;
			cout<<"Ownership cost: "<<own_cost<<endl;
			cout<<"Warranty: "<<warranty<<endl;
			cout<<"Seat Capacity: "<<seat_capacity<<endl;
			cout<<"Fuel type: "<<fuel<<endl;
		}
};
class ford:public car
{
	public:
		int ford_type;
			void getdata()
		{
			cout<<"This is a Ford"<<endl;
			cout<<"Ford type: ";
			cin>>ford_type;
			cout<<"Ownership cost: ";
			cin>>own_cost;
			cout<<"Warranty: ";
			cin>>warranty;
			cout<<"Seat Capacity: ";
			cin>>seat_capacity;
			cout<<"Fuel type(diesel or petrol)";
			cin>>fuel;
		}
		void display()
		{
			cout<<"This is a Ford"<<endl;
			cout<<"Of model type: "<<ford_type<<endl;
			cout<<"Ownership cost: "<<own_cost<<endl;
			cout<<"Warranty: "<<warranty<<endl;
			cout<<"Seat Capacity: "<<seat_capacity<<endl;
			cout<<"Fuel type: "<<fuel<<endl;
		}
};
class bajaj:public bike
{
	public:
	int bajaj_type;
	void getdata()
	{
		cout<<"This is for BAJAJ bike"<<endl;
		cout<<"Model type: ";
		cin>>bajaj_type;
		cout<<"Number of cylinders: ";
		cin>>cylinders;
		cout<<"Number of gears: ";
		cin>>no_gears;
		cout<<"Cooling type: ";
		cin>>cooling_type;
		cout<<"Wheel type: ";
		cin>>wheeltype;
		cout<<"Fuel size(inches): ";
		cin>>fuel_size;
	}
	void display()
	{
		cout<<"Model type: "<<bajaj_type<<endl;
		cout<<"Number of cylinders: "<<cylinders<<endl;
		cout<<"Number of gears: "<<no_gears<<endl;
		cout<<"Cooling type: "<<cooling_type<<endl;
		cout<<"Wheel type: "<<wheeltype<<endl;
		cout<<"Fuel size: "<<fuel_size<<endl;
	}
};
class tvs:public bike
{
	public:
		int tvs_type;
		void getdata()
	{
		cout<<"This is for TVS bike"<<endl;
		cout<<"Model type: ";
		cin>>tvs_type;
		cout<<"Number of cylinders: ";
		cin>>cylinders;
		cout<<"Number of gears: ";
		cin>>no_gears;
		cout<<"Cooling type: ";
		cin>>cooling_type;
		cout<<"Wheel type: ";
		cin>>wheeltype;
		cout<<"Fuel size(inches): ";
		cin>>fuel_size;
	}
	void display()
	{
		cout<<"Model type: "<<tvs_type<<endl;
		cout<<"Number of cylinders: "<<cylinders<<endl;
		cout<<"Number of gears: "<<no_gears<<endl;
		cout<<"Cooling type: "<<cooling_type<<endl;
		cout<<"Wheel type: "<<wheeltype<<endl;
		cout<<"Fuel size: "<<fuel_size<<endl;
	}
};
int main()
{
	tvs t;
	bajaj b;
	ford f;
	audi a;
	a.getdata();
	a.display();
	cout<<endl<<endl<<endl;
	f.getdata();
	f.display();
	cout<<endl<<endl<<endl;
	b.getdata();
	b.display();
	cout<<endl<<endl<<endl;
	t.getdata();
	t.display();
}

