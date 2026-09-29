#include <iostream>
using namespace std;
int main()
{
	int speed;
	cout<<"Enter SPEED(km/h) of your vehicle: ";
	cin>>speed;
	if(speed<=60)
	{
	cout<<"WITHIN SPEED."<<endl;
	}
    else
	{
	cout<<"OVER SPEED."<<endl;
	}
	return 0;
}
