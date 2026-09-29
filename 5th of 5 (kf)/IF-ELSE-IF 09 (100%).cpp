#include <iostream>
using namespace std;
int main()
{
	int days;
	cout<<"___________LIBARARY BOOK OVERDUE___________"<<endl;
	cout<<endl;
	cout<<"Enter the number of days a library book is overdue: ";
	cin>>days;
	if(days==0)
	{
	cout<<"NO FINE"<<endl;
	}
    else if(days>=1 && days<=5)
	{
	int f=days*50;
	cout<<"YOUR FINE IS: "<<"RS."<<f<<endl;
	}
	else if(days>=6 && days<=10)
	{
	int f1=days*100;
	cout<<"YOUR FINE IS: "<<"RS."<<f1<<endl;
	}
	else if(days>=11 && days<=20)
	{
	int f2=days*150;
	cout<<"YOUR FINE IS: "<<"RS."<<f2<<endl;
	}
	else if(days>20)
	{
	int f3=days*200;
	cout<<"YOUR FINE IS: "<<"RS."<<f3<<endl;
	}
	else
	{
	cout<<("INVALID DATA");
	}
	return 0;
}