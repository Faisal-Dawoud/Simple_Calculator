#include <iostream>
using namespace std;

int main()
{
    cout << "============================\n";
    cout << "==== simple calculator =====\n";
    cout << "============================\n"; 

int number_One;
int number_Two;
int operation;

cout << "Please enter the first nmber: ";
cin >> number_One;

cout << "Please enter the second nmber: ";
cin >> number_Two;

cout << "Please select the operation:\n";
cout << "[1] +\n";
cout << "[2] -\n";
cout << "[3] *\n";
cout << "[4] /\n";
 cin >> operation;

if ( operation == 1 )
{
cout << number_One << " + " << number_Two << " = " << number_One + number_Two;
} else if ( operation == 2)
{
cout << number_One << " - " << number_Two << " = " << number_One - number_Two;
} else if ( operation == 3)
{
cout << number_One << " * " << number_Two << " = " << number_One * number_Two;
}  else if (operation == 4) {
   cout << number_One << " / " << number_Two << " = " << number_One / number_Two;
} else 
cout << "Sorry, the operation number is not correct";

return 0;
}
