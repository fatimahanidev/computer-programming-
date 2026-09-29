#include <iostream>
using namespace std;
int main()
{
	int sub,sub1,sub2;
	cout<<"___________STUDENT'S PERCENTAGE___________"<<endl;
	cout<<endl;
	cout<<"- TOTAL MARKS OF EVERY SINGLE SUBGECT IS 50."<<endl<<"- TOTAL OF ALL SUBJECT IS 150."<<endl;
	cout<<endl;
	cout<<"Enter your 1st subject marks: ";
	cin>>sub;
	cout<<"Enter your 2nd subject marks: ";
	cin>>sub1;
	cout<<"Enter your 3rd subject marks: ";
	cin>>sub2;
	float per=(sub*100)/50;
	float per1=(sub1*100)/50;
	float per2=(sub2*100)/50;
	float average=(per+per1+per2)/3;
	cout<<"YOUR AVERAGE PERCENTAGE IS: "<<average<<"%"<<endl;
	if(average<33)
	{
	cout<<"FAIL"<<endl;
	}
    else if(average>33 && average<=49)
	{
	cout<<"PASS"<<endl;
	}
	else if(average>=50 && average<=64)
	{
	cout<<"GOOD"<<endl;
	}
	else if(per>=65 && per<=79)
	{
	cout<<"VERY GOOD"<<endl;	
	}
	else if(per>=80)
	{
	cout<<"EXCELLENT"<<endl;
	}
	else
	{
	cout<<("INVALID DATA");
	}
	return 0;
}