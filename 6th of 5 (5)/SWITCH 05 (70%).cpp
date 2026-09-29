#include <iostream>
using namespace std;
int main() 
{
    int code,quality;
    int price;
    cout<<"ENTER YOUR FOOD ITEM CODE(1-4): ";
    cin >> code;
    cout<<"ENTER YOUR FOOD QUALITY: ";
    cin >> quality;
    switch(code) 
	{
    case 1:
    price = 200;
    cout<<"THE PRICE OF PIZZA: "<<price;
    cout<<endl;
    break;
    case 2:
    price = 120;
    cout<<"THE PRICE OF BURGER: "<<price;
    cout<<endl;
    break;
    case 3:
    price = 100;
    cout<<"THE PRICE OF SANDWICH: "<<price;
    cout<<endl;
    break;
    case 4:
    price = 150;
    cout<<"THE PRICE OF PASTA: "<<price;
    cout<<endl;
    break;
    }
    int totalbill=price*quality;
    cout << "Total Bill = RS." <<totalbill;
    return 0;
}
