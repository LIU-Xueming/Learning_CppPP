// instr1.cpp -- reading more than one string

// 笔记
// 下面的程序出现如下问题：
// 尚未输入 dessert 的信息，程序就直接执行了后面的所有程序
// 这是由于 cin 使用空白(空格、制表符、换行符)来确定字符串的结束位置
// 这意味着，cin 在获取字符数组输入时，只读取一个单词，第二个单词将会被留在输入列队中
// 同时，也可能遇到  输入字符串比目标数组长的问题，比如，将30个字符组成的字符串放在20长度的数组中
// 因此，必须使用cin 的较高属性

#include <iostream>
int main()
{
    using namespace std;
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}