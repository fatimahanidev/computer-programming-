#include <iostream>
using namespace std;
int main()
{
	int items;
	cout<<"ENTER THE NUMBER OF ITEMS YOU PURCHASED: ";
	cin>>items;
	if(items>=10)
	{
	cout<<"BULK ORDER."<<endl;
	}
    else
	{
	cout<<"NORMAL ORDER.";
	}
	return 0;
}
