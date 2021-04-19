#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 1;
    {
        int b = 2;
        {
            int a = 3;
            cout << "a = " << a << ", b = " << b;
        }
        {
            int b = 4;
            cout << "a = " << a << ", b = " << b;
        }
        cout << "a = " << a << ", b = " << b;
    }
    cout << "a = " << a << ", b = " << b;
}