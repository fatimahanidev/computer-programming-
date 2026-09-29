#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter first angle of triangle: ";
	cin>>a;
	cout<<"Enter second angle of triangle: ";
	cin>>b;
	cout<<"Enter third angle of triangle: ";
	cin>>c;
	int sum=a+b+c;
	if(sum==180)
	{
	cout<<"The triangle is valid."<<endl;
	if(a==90 || b==90 || c==90)
	{
	cout<<"The triangle is right-angle."<<endl;
	}
	if(a<90 && b<90 && c<90 )
	{
	cout<<"The triangle is acute."<<endl;
	}
	if(a>90 || b>90 || c>90)
	{
	cout<<"The triangle is obtuse."<<endl;
	}
}
	return 0;
}
