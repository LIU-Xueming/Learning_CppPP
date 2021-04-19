// exercise 1:
// converts your height to feet and inches 

#include <iostream>

int main()
{
    using namespace std;
    const int Feet_to_inches = 12;
    int feet;
    cout << "Your height in feet: ";
    cin >> feet;
    cin.get();
    int inche = feet / Feet_to_inches;
    int feet_rest = feet % Feet_to_inches;
    cout << "Your height is " << inche << " inches " << feet_rest << " feets.\n";
    cin.get();
    return 0; 
}