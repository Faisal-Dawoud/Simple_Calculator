#include <iostream>
using namespace std;

int main()
{
    cout << "============================\n";
    cout << "==== simple calculator =====\n";
    cout << "============================\n"; 

int number_One;
int number_Two;
char operation;

cout << "Please enter the first nmber: ";
cin >> number_One;

cout << "Please enter the second nmber: ";
cin >> number_Two;

cout << "Please enter the opearation mark: ";
cin >> operation;

if ( operation == int('+'))
{
cout << number_One << " + " << number_Two << " = " << number_One + number_Two;
} else if ( operation == int('*'))
{
cout << number_One << " * " << number_Two << " = " << number_One * number_Two;
} else if ( operation == int('/'))
{
cout << number_One << " / " << number_Two << " = " << number_One / number_Two;
}  else if (operation == int('-')) {
   cout << number_One << " - " << number_Two << " = " << number_One - number_Two;
} else 
cout << "Sorry, the operation mark is not correct";

return 0;
}