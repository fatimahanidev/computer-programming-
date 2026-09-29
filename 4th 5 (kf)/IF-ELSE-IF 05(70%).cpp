#include <iostream>
using namespace std;
int main()
{
	int hours;
	cout<<"___________EMPLOYEE WORKED HOURS___________"<<endl;
	cout<<endl;
	cout<<"Enter your WORKING-HOURS: ";
	cin>>hours;
	if(hours<20)
	{
	cout<<"PART-TIME"<<endl;
	}
    else if(hours>20 && hours<=39)
	{
	cout<<"REGULAR"<<endl;
	}
	else if(hours>=40 && hours<=59)
	{
	cout<<"FULL-TIME"<<endl;
	}
	else if(hours>=60)
	{
	cout<<"OVERTIME"<<endl;	
	}
	else
	{
	cout<<("INVALID DATA");
	}
	return 0;
}