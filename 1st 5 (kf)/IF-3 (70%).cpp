#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter first side of triangle: ";
	cin>>a;
	cout<<"Enter second side of triangle: ";
	cin>>b;
	cout<<"Enter third side of triangle: ";
	cin>>c;
	if(a+b+c==180)
	{
	cout<<"Valid Triangle:) ";
	}
	if(a==b && b==c && a==c)
	{
	cout<<"The triangle is equilateral.";
	}
	if(a>b && a>c)
	{
	cout<<"The triangle is isosceles.";
	}
	if(a!=b && b!=c && a!=c)
	{
	cout<<"The triangle is scalene.";
	}
	
	return 0;
}