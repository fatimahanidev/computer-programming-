#include <iostream>
using namespace std;
int main()
{
	int salary,houserent,transportallowance;
	cout<<"Enter your salary: ";
	cin>>salary;
	cout<<"Enter second house rent: ";
	cin>>houserent;
	cout<<"Enter third transport allowance: ";
	cin>>transportallowance;
	if(salary>30000)
	{
    float HRA=20/100;
    transportallowance=(float)10/100;
    int NETSALARY=salary+transportallowance+HRA;
    cout<<"NET-SALARY: "<<NETSALARY;
	}
	return 0;
}