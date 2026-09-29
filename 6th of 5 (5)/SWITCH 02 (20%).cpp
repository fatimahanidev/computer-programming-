#include <iostream>
using namespace std;
int main()
{
    int season;
    cout<<"ENTER A NUMBER(1-4): ";
    cin>>season;
    switch(season) 
	{
    case 1:
    cout<< "Spring";
    break;
    case 2:
    cout<< "Summer";
    break;
    case 3:
    cout<< "Autumn";
    break;
    case 4:
    cout<< "Winter";
    break;
    default:
    cout<< "Invalid number";
    }
    return 0;
}