#include <iostream>
using namespace std;
int main()
{
	int cost,sell;
	cout<<"--------FIND YOUR PROFIT AND LOSE--------"<<endl<<"(The selling price is not equal to cost price)"<<endl;
	cout<<endl;
	cout<<"Enter COST PRIZE: ";
	cin>>cost;
	cout<<endl;
	cout<<"Enter SELLING PRICE: ";
	cin>>sell;
	cout<<endl;
	int profit=sell-cost;
	int lose=cost-sell;
	if(sell>cost)
	{
	cout<<"<<<<<<<< PROFIT :) >>>>>>>>"<<endl;
	cout<<endl;
    cout<<"The PROFIT is: "<<profit<<endl;
	}
    else
	{
	cout<<"<<<<<<<< LOSE :( >>>>>>>>"<<endl;
	cout<<endl;
	cout<<"The LOSE is: "<<lose<<endl;
	}
	return 0;
}
