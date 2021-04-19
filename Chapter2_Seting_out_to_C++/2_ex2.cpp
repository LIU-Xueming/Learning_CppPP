// exercise 2:
// convert furlongs to yards

#include <iostream>
int main()
{
    using namespace std;
    cout << "Please input a distance in furlongs: ";
    double furlong;
    cin >> furlong;
    cin.get();
    double yard;
    yard = 220*furlong;
    cout << "The distance is " << yard << " yards." << endl;
    cin.get();
    return 0;
}