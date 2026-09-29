#include <iostream>
using namespace std;
int main()
{
	int exp,salary;
	cout<<"___________EMPLOYEE'S EXPERIENCE___________"<<endl;
	cout<<endl;
	cout<<"Enter YOUR EXPERIENCE OF YEARS: ";
	cin>>exp;
	cout<<"Enter YOUR SALARY: ";
	cin>>salary;
	if(exp<1 && salary<20000)
	{
	cout<<"TRAINEE"<<endl;
	cout<<"SALARY IS 'RS.20000'";
}
    else if(exp==1 && exp<=3)
	{
	cout<<"JUNIOR"<<endl;
	cout<<"SALARY IS BELOW 'RS.50000'";
	}
	else if(exp>=4 && exp<=7)
	{
	cout<<"EXPERIENCED"<<endl;
	cout<<"SALARY IS 'RS.50000'";
	}
	else if(exp>7)
	{
	cout<<"SENIOR"<<endl;
	cout<<"SALARY IS ABOVE 'RS.50000'";
	}
	else
	{
	cout<<("INVALID DATA");
	}
	return 0;
}