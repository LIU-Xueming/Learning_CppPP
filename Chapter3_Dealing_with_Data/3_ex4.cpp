// exercise 4:
// displays the seconds time in days, hours, minutes, and seconds

#include <iostream>
int main()
{
    using namespace std;
    const int Per = 60;
    const int Per_day = 24;

    long long allSecond;
    cout << "Enter the number of seconds: ";
    cin >> allSecond;
    cin.get();
    int second = allSecond % Per;
    int allMinute = allSecond / Per;
    int minute = allMinute % Per;
    int allHour = allMinute / Per;
    int hour = allHour % Per;
    long long day = allHour / Per_day;

    cout << allSecond << " seconds = " << day << " days, ";
    cout << hour << " hours, " << minute << " minutes, " << second << " second.\n";
    cin.get();
    return 0;
}