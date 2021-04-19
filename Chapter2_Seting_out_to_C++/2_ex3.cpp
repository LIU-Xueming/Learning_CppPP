// exercise 3:
// output functions

#include <iostream>
using namespace std;

void blind(void);
void see(void);

int main()
{
    blind();
    blind();
    see();
    see();
    cin.get();
    return 0;
}

void blind(void)
{
    cout << "There blind mice." << endl;
}

void see(void)
{
    cout << "See how they run." << endl;
}