// exercise 6:
// convert light year

#include <iostream>

double convert_liY(double);

int main()
{
    using namespace std;
    cout << "Please enter a number of light year: ";
    double liY;
    cin >> liY;
    cin.get();

    double units;
    units = convert_liY(liY);
    cout << liY << " light year = " << units << " astronomical units." << endl;
    cin.get();

    return 0;
}

double convert_liY(double celsius)
{
    double fahrenheit;
    fahrenheit = 63240*celsius;
    return fahrenheit;
}