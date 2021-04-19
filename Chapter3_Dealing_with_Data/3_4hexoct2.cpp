// hexoct2.cpp -- display values in hex and octal

// 笔记
// cout中提供了控制符dec, hex, oct分别用于显示不同的进制格式的整数

#include <iostream>
using namespace std;
int main()
{
using namespace std;
int chest = 42;
int waist = 42;
int inseam = 42;
cout << "Monsieur cuts a striking figure!" << endl;
cout << "chest = " << chest << " (decimal for 42)" << endl;
cout << hex; // manipulator for changing number base
cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
cout << oct; // manipulator for changing number base
cout << "inseam = " << inseam << " (octal for 42)" << endl;
return 0;
}