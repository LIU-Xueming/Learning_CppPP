// hexoct1.cpp -- shows hex and octal literals

// 笔记
// 整型字面值，即 十进制、八进制、十六进制
// 第一位 为0，则为八进制
// 第一位 为0x，则为十六进制
// 英语中 
// 十进制：decimal
// 八进制：octal
// 十六进制： hex

#include <iostream>
int main()
{
using namespace std;
int chest = 42; // decimal integer literal
int waist = 0x42; // hexadecimal integer literal
int inseam = 042; // octal integer literal
cout << "Monsieur cuts a striking figure!\n";
cout << "chest = " << chest << " (42 in decimal)\n";
cout << "waist = " << waist << " (0x42 in hex)\n";
cout << "inseam = " << inseam << " (042 in octal)\n";
return 0;
}