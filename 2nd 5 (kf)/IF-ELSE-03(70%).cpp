#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter FIRST INTEGER: ";
	cin>>num1;
	cout<<"Enter SECOND INTEGER: ";
	cin>>num2;
	int sum=num1+num2;
	if(sum>=100)
	{
	cout<<"The SUM IS GREATER THAN '100'."<<endl;
	}
    else
	{
	cout<<"The SUM IS NOT GREATER THAN '100'."<<endl;
	}
	return 0;
}
