// exercise 6:
// reports the miles per gallon

#include <iostream>
int main()
{
    using namespace std;
    float miles, gallon;
    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallon;
    float m_per_g = miles / gallon;
    cout << "Your car " << m_per_g << " miles per gallon.";
    return 0;
}