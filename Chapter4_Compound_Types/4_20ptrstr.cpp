// ptrstr.cpp -- using pointers to strings

#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps;

    cout << animal << " and ";
    cout << bird << "\n";
}