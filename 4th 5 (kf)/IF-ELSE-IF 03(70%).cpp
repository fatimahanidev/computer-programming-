#include <iostream>
using namespace std;
int main()
{
	int battery;
	cout<<"___________MOBILE'S PHONE BATTERY___________"<<endl;
	cout<<endl;
	cout<<"Enter YOUR MOBILE'S PHONE BATTERY: ";
	cin>>battery;
	if(battery<0 && battery>=15)
	{
	cout<<"Critical"<<endl;
	}
    else if(battery>=16 && battery<=40)
	{
	cout<<"LOW"<<endl;
	}
	else if(battery>=41 && battery<=75)
	{
	cout<<"NORMAL"<<endl;
	}
	else if(battery>=75 && battery<=100)
	{
	cout<<"GOOD"<<endl;	
	}
	else
	{
	cout<<("INVALID DATA");
	}
	return 0;
}