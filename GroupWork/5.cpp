#include<iostream>
using namespace std;
class BOOK
{
	int BOOKNO;
	char BOOKTITLE[20];
	float price;
	float total_cost(int n)
	{
		return n*price;	
	}	
	public:
		void input()
		{
			cout<<"Enter BOOK_NO: ";
			cin>>BOOKNO;
			int no,i;
			cout<<"How long is your booktitle: ";
			cin>>no;
			cout<<"Enter your booktitle: ";
			for(i=0;i<no;i++)
			{
				cin>>BOOKTITLE[i];	
			}
			cout<<"Enter price of the book: ";
			cin>>price;
			cout<<endl;
		}
		void purchase()
		{
			int no;
			cout<<"Enter number of books: ";
			cin>>no;
			cout<<"Your total cost for all your books is: "<<total_cost(no)<<endl;
		}
};
int main()
{
	BOOK b;
	b.input();
	b.purchase();
}