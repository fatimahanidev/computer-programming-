#include <iostream>
using namespace std;

int main() {
    int vehicletype, hours,rate;
    cout << "Enter Vehicle Type:\n";
    cout << "1. Two Wheeler - Rs. 20/hour\n";
    cout << "2. Car         - Rs. 40/hour\n";
    cout << "3. SUV         - Rs. 60/hour\n";
    cout << "4. Bus         - Rs. 100/hour\n";
    cout << "Enter your choice: ";
    cin >> vehicletype;
    switch (vehicletype) 
	{
    case 1:
    rate = 20;
    break;
    case 2:
    rate = 40;
    break;
    case 3:
    rate = 60;
    break;
    case 4:
    rate = 100;
    break;
    default:
    cout << "Invalid vehicle type!";
    }
    int totalCharge;
    cout << "Enter number of parking hours: ";
    cin >> hours;
    if (hours <= 0) 
	{
    cout << "Invalid parking hours!";
    }
    totalCharge = rate * hours;
    cout << "Total Parking Charge = Rs. " << totalCharge << endl;
    return 0;
}