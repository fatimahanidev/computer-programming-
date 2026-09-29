#include <iostream>
using namespace std;
int main()
{
	int units;
	cout<<"___________ELECTRICITY RS/UNITS CALCULATOR___________"<<endl;
	cout<<endl;
	cout<<"Enter the monthly electricity consumption in units: ";
	cin>>units;
	if(units>=0 && units<=100)
	{
	int u1=units*20;
	cout<<"TOTAL BILL PER UNIT IS: "<<"RS."<<u1<<endl;
	}
    else if(units>=101 && units<=200)
	{
	int u2=units*40;
	cout<<"TOTAL BILL PER UNIT IS: "<<"RS."<<u2<<endl;
	}
	else if(units>=201 && units<=400)
	{
	int u3=units*60;
	cout<<"TOTAL BILL PER UNIT IS: "<<"RS."<<u3<<endl;
	}
	else if(units>400)
	{
	int u4=units*80;
	cout<<"TOTAL BILL PER UNIT IS: "<<"RS."<<u4<<endl;
	}
	else
	{
	cout<<("INVALID DATA");
	}
	return 0;
}