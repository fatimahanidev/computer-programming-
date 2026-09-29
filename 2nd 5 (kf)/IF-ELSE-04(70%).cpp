#include <iostream>
using namespace std;
int main()
{
	int year;
	cout<<"ENTER YEAR: ";
	cin>>year;
	if(year%400==0 || (year%4==0 && year%100!=0))
	{
	cout<<"IT HAS 366 DAYS."<<endl<<"SO,IT IS A LEAP YEAR."<<endl;
	}
    else
	{
	cout<<"IT HAS 365 DAYS."<<endl;
	}
	return 0;
}
