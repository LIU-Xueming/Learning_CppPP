// numstr.cpp -- following number input with line input

// 笔记
// 下面的程序将出现问题
// 在输入年份后，根本无 再输入地址的机会
// 这是由于 cin 读取年份后，回车键 生成了 换行符
// 后面再使用 cin.getline()读取字符串时，将会首先读取 遗留下的 换行符，并认为这是个空行

// 解决办法：在读取完数字后，再读取并丢弃 换行符
// 办法一：cin >> year; cin.get();
// 办法二：(cin >> year).get();

//***********************************************
// 通常在C++中，使用指针而不是数组来处理 字符串
//*********************************************

#include <iostream>
int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Adress: " << address << endl;
    cout << "Done!\n";
    return 0;
}