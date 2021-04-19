// exercise 5:
// convert temperature

#include <iostream>

double convert_temp(double);

int main()
{
    using namespace std;
    cout << "Please enter a Celsius value: ";
    double celsius;
    cin >> celsius;
    cin.get();

    double fahrenheit;
    fahrenheit = convert_temp(celsius);
    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit" << endl;
    cin.get();

    return 0;
}

double convert_temp(double celsius)
{
    double fahrenheit;
    fahrenheit = 1.8*celsius+32.0;
    return fahrenheit;
}