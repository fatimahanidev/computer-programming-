#include <iostream>
using namespace std;
int main() 
{
    char direction;
    cout<<"________A SINGLE ALPHABET 'N,S,E,W' ________"<<endl;
    cout<<endl;
    cout<<"ENTER A SINGLE ALPHABET: ";
    cin>> direction;
    switch(direction) 
	{
    case 'N':
    cout << "North";
    break;
    case 'S':
    cout << "South";
    break;
    case 'E':
    cout << "East";
    break;
    case 'W':
    cout << "West";
    break;
    }

    return 0;
}