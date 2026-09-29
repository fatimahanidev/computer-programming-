#include <iostream>
using namespace std;
int main() 
{
   int COLOR;
   cout<<"ENTER A NUMBER(1-5): ";
   cin>>COLOR;
   switch(COLOR) 
   {
   case 1: cout<< "Red"; break;
   case 2: cout<< "Yellow"; break;
   case 3: cout<< "Green";break;
   case 4: cout<< "Blue";break;
   case 5: cout<< "White";break;
   default:
   cout<< "Invalid number";
   }
   return 0;
}