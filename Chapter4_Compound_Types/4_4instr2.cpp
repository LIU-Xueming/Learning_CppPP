// instr2.cpp -- reading more than one word with getline()

// 笔记
// 每次读取一行字符串输入
// 对于大多数情况，需要读取一串字符串
// 因此需要面向 行 而不是面向 单词 的字符串读取方法

// cin 中提供了一些面向 行 的类成员函数：getline()和get()
// 这两个函数都读取一行输入，直到到达换行符
// ***********************************
// 但是！！！！！！！
// getline() 将丢弃 换行符！！将换行符处换为 空字符！！！
// get() 将 换行符 保留在输入序列中！！！！！
// *****************************************

// 面向行的输入 getline()
// 要调用这个方法，使用 cin.getline()
// 这个函数有两个参数，第一个参数为 存储字符串的数组名称，第二个为要读取的字符数

#include <iostream>
int main()
{
    using namespace std;
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];

    cout << "Enter your name:\n";
    cin.getline(name, Arsize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, Arsize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}