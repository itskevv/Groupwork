#include<iostream>
using namespace std;
class account
{
	int balance, accno;
	public: 
		account()
		{
			balance=0;
		}
		account(account &s)
		{
			balance = ++s.balance;
			accno=0;
		}
		void assign(int u)
		{
			balance =110;
			accno=u;
		}
		void disp()
		{
			cout<<"Balance: "<<balance<<endl;
			cout<<"Acc no: "<<accno<<endl;
		}
};
int main()
{
	account a1;
	a1.assign(9);
	a1.disp();
	account a2(a1);
	a2.disp();
	account a3(a2);
	int y=10;
	a3.assign(-y);
	a3.disp();
	return 0;
}