#include <iostream>
using namespace std;
int main()
{
	int days;
	cout<<"Enter the number(1-7): ";
	cin>>days;
	if(days>=1 && days<=4)
	{
	cout<<"WORKING DAY."<<endl;
	}
    else if(days>=5&& days<=7)
	{
	cout<<"WEEKEND"<<endl;
	}
	else
	{
	cout<<"INVALID DAYS."<<endl;	
	}
	return 0;
}
