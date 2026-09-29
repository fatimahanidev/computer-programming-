#include <iostream>
using namespace std;
int main()
{
	int weight;
	cout<<"____________What is the weight of your package?_____________"<<endl;
	cout<<endl;
	cout<<"Enter the weight of a package in kg: ";
	cin>>weight;
	cout<<endl;
	if(weight<=10)
	{
	int rs=weight*50;
	cout<<"The WEIGHT is: "<<weight<<"kg"<<endl;
	cout<<endl;
	cout<<"THE PRICE per kg IS: "<<"RS."<<rs<<endl;
	}
    else
	{
    int RS=weight*80;
	cout<<"The WEIGHT is: "<<weight<<"kg"<<endl;
	cout<<endl;
	cout<<"THE PRICE per kg IS: "<<"RS."<<RS<<endl;
	}
	return 0;
}
