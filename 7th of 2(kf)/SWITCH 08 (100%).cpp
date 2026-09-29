#include <iostream>
using namespace std;
int main() 
{
    int choice, tickets;
    double price, total, discount, finalAmount;
    string ticketType;
    cout << "Movie Booking System" << endl;
    cout << "1. Regular Seat = Rs. 150" << endl;
    cout << "2. Recliner = Rs. 300" << endl;
    cout << "3. Premium Seat = Rs. 450" << endl;
    cout << "\nEnter your choice: ";
    cin >> choice;
    switch (choice) 
	{
    case 1:
    ticketType = "Regular Seat";
    price = 150;
    break;
    case 2:
    ticketType = "Recliner";
    price = 300;
    break;
    case 3:
    ticketType = "Premium Seat";
    price = 450;
    break;
    default:
    cout << "Invalid ticket type!" << endl;
    return 0;
    }
    cout << "Enter number of tickets: ";
    cin >> tickets;
    if (tickets <= 0) 
	{
    cout << "Invalid number of tickets!" << endl;
    return 0;
    }
    total = price * tickets;
    if (tickets >= 4) 
	{
    discount = total * 0.10;
    } else 
	{
    discount = 0;
    }
    finalAmount = total - discount;
    cout << "\n--- Booking Details ---" << endl;
    cout << "Ticket Type: " << ticketType << endl;
    cout << "Total Amount: Rs. " << total << endl;
    cout << "Discount: Rs. " << discount << endl;
    cout << "Final Amount: Rs. " << finalAmount << endl;
    return 0;
}