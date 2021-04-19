// exercise 7:
// output time

#include <iostream>

void showTime(int,int);

int main()
{
    using namespace std;

    cout << "Enter the number of hours: ";
    int hour;
    cin >> hour;
    cin.get();
    cout << "Enter the number of minutes: ";
    int minute;
    cin >> minute;
    cin.get();

    showTime(hour,minute);
    cin.get();
    return 0;
}

void showTime(int hour, int minute)
{
    using namespace std;
    cout << "Time: " << hour << ":" << minute <<endl;
}