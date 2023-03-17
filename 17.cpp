#include<iostream>
using namespace std;
int main()
{
  int a;
  int *aa;
  cout<<"Enter a number: ";
  cin>>a;
  aa=&a;
  cout<<"Value is: "<<*aa;
}
