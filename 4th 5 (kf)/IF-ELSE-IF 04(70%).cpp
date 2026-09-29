#include <iostream>
using namespace std;
int main()
{
	int per	;
	cout<<"___________STUDENT'S PERCENTAGE___________"<<endl;
	cout<<endl;
	cout<<"Enter your percentage: ";
	cin>>per;cout<<"%";
	if(per<33)
	{
	cout<<"FAIL"<<endl;
	}
    else if(per>33 && per<=49)
	{
	cout<<"THIRD DIVISION"<<endl;
	}
	else if(per>=50 && per<=59)
	{
	cout<<"SECOND DIVISON"<<endl;
	}
	else if(per>=60 && per<=74)
	{
	cout<<"FIRST DIVISION"<<endl;	
	}
	else if(per>=75)
	{
	cout<<"DISTINCTION"<<endl;
	}
	else
	{
	cout<<("INVALID DATA");
	}
	return 0;
}