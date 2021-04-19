// morechar.cpp -- the char type and int type contrasted

// 笔记
// 在C++中，对字符字面值应用引号括起
// 字符 使用 单引号，字符串 使用 双引号
// cout.put()函数作用是，显示一个字符
// 如果类型是char，则输入 数字 也被视为 字符
// put后的括号 内 只能是 单引号的单个字符，或者是直接的数字

// 解析成员函数 cout.put()
// 属于OOP概念中  的成员函数
// 类定义了  如何  表示 和 控制 数据
// 成员函数 归 类 所有，描述了控制数据的方法
// 需要通过特定的对象来使用成员函数
// 通过对象cout来使用函数put()

#include <iostream>
int main()
{
using namespace std;
char ch = 'M'; // assign ASCII code for M to ch
int i = ch; // store same code in an int
cout << "The ASCII code for " << ch << " is " << i << endl;
cout << "Add one to the character code:" << endl;
ch = ch + 1; // change character code in ch
i = ch; // save new character code in i
cout << "The ASCII code for " << ch << " is " << i << endl;
// using the cout.put() member function to display a char
cout << "Displaying char ch using cout.put(ch): ";
cout.put(ch);
// using cout.put() to display a char constant
cout.put('!');
cout << endl << "Done" << endl;
cout << '$';
return 0;
}