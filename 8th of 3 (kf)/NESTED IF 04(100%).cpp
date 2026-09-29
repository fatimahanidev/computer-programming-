#include <iostream>
using namespace std;
int main() 
{
    int per;
    cout<<"ENTER YOUR ATTENDENCE PERCENNTAGE: ";
    cin>>per;
    if(per>=75) 
	{
    if(per>=90) 
	{
    cout<<"EXCELLENT ATTENDENCE";
    }
    else 
	{
    cout<<"GOOD ATTENDENCE";
    }
    }
	else 
	{
    cout<<"SHORT ATTENDENCE";
    }
    return 0;
}