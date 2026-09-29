#include <iostream>
using namespace std;
int main()
{
	int height;
	cout<<"Enter YOUR HEIGHT: ";
	cin>>height;
	if(height<150 && height>100)
	{
	cout<<"SHORT"<<endl;
	}
    else if(height>=150 && height<=175)
	{
	cout<<"AVERAGE"<<endl;
	}
	else if(height>175)
	{
	cout<<"TALL"<<endl;
	}
	else
	{
	cout<<"INVALID."<<endl;	
	}
	return 0;
}
