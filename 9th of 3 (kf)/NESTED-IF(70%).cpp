#include <iostream>
using namespace std;
int main() 
{
    int marks;
    cout<<"Enter a marks: ";
    cin>>marks;
    if(marks>=40) 
	{
    if(marks>=75) 
	{
    cout<<"EXCELLENT MARKS";
    }
    else 
	{
    cout<<"PASS";
    }
    }
	else 
	{
    cout<<"FAIL";
    }
    return 0;
}