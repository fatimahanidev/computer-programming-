#include <iostream>
using namespace std;
int main()
{
	int total,obtain;
	cout<<"____________ARE YOU QUALIFIED OR NOT?_____________"<<endl;
	cout<<endl;
	cout<<"Enter TOTAL MARKS: ";
	cin>>total;
	cout<<endl;
	cout<<"Enter OBTAINED MARKS: ";
	cin>>obtain;
	cout<<endl;
	float percentage=(obtain*100)/total;
	cout<<"YOUR PERCENTAGE IS: "<<percentage<<"%"<<endl;
	cout<<endl;
if(total>obtain)
{
	if(percentage>=60 && total>obtain)
	{
	cout<<"QUALIFIED :) "<<endl;
	cout<<endl;
	cout<<"CONGRATULATIONS!";
	}
    else
	{
	cout<<"NOT QUALIFIED :( "<<endl;
	cout<<endl;
	cout<<"DON'T GIVE UP";
	}
}
else
{
	cout<<"INVALID MARKS";
}
	return 0;
}