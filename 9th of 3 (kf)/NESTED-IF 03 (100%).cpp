#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout<<"ENTER ANY NUMBER: ";
    cin>>num;
    if(num>=0) 
	{
    if(num%5==0) 
	{
    cout<<"POSITIVE AND DIVISIBLE BY 5";
    }
    else 
	{
    cout<<"POSITIVE AND NOT DIVISIBLE BY 5";
    }
    }
	else 
	{
    cout<<"NEGATIVE";
    }
    return 0;
}