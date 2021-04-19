// exercise 3:
// displays the latitude in decimal format

#include <iostream>
int main()
{
    using namespace std;
    const int Per = 60;

    int degree, minute, second;

    cout << "Enter a latitude in degrees, minutes, seconds: \n";
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;
    
    double inMinute = double(minute) + double(second) / Per;
    double inDegree = double(degree) + inMinute / Per;

    cout << degree << " degrees, " << minute << " minutes, ";
    cout << second << " seconds = " << inDegree << " degrees." << endl;
    return 0;
}