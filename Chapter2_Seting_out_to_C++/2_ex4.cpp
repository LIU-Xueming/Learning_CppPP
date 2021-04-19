// exercise 4:
// age in months

#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cin.get();
    int age_months;
    age_months = 12*age;
    cout << "Your age in months is " << age_months << endl;
    cin.get();
    return 0;
}