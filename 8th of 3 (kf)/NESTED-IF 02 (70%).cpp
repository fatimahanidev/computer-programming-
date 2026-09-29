#include <iostream>
using namespace std;
int main() 
{
    int age;
    cout<<"Enter a PERSON'S AGE: ";
    cin>>age;
    if(age>=18) 
	{
    if(age>=60) 
	{
    cout<<"SENIOR CITIZEN";
    }
    else 
	{
    cout<<"ADULT";
    }
    }
	else 
	{
    cout<<"MINOR";
    }
    return 0;
}