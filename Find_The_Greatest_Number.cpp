#include <iostream>
using namespace std;

int main()
{
    cout << "===================================\n";
    cout << "==== Find the greatest number =====\n";
    cout << "===================================\n"; 
int number_One;
int number_Two;
int number_Three;
cout << "please enter the first number ";
cin >> number_One;
cout << "please enter the second number ";
cin >> number_Two;
cout << "please enter the third number ";
cin >> number_Three;

if (number_One > number_Two)
{
if (number_One > number_Three )
{
cout << number_One << " is the greatest number";
} else
cout << number_Three << " Is the greatest number";
} else if (number_Two > number_Three) 
{
cout << number_Two <<" is the greatest numbers";
} else if (number_Two >= number_Three) {
    cout << number_Three << " is the greatest number";
} else
cout << number_Three << " is the greatest number";

return 0;
}