// strtype4.cpp -- line input

// 笔记
// string类的I/O
// cin cout可以存储和显示 string类
// 其句法与处理 和C风格的字符串相同
// 但是每次读取一行而不是一个单词时，使用的句法不同

// **********************************************
// 将一行输入 读取到数组中的代码为：
// cin.getline(charr, 20);
// 将一行输入 读取到string对象中的代码为：
// getline(cin, str);
// 两者的区别在于，第一个为istream的类方法（cin为istream的对象），而第二个并非
// 这是由于最初的时候，还没有string类型
// 而之所以能够使用 cin >> string； 是因为
// 使用string类的一个友元函数！！！！！！！！！！！
// *****************************************************

// C++11新增 原始字符串（raw)
// cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << '\n';
// This would display the following:
// Jim "King" Tutt uses \n instead of endl.
// 
// cout << R"+*("(Who wouldn't?)", she whispered.)+*" << endl;
// would display the following:
// "(Who wouldn't?)", she whispered.

#include <iostream>
#include <string> // make string class available
#include <cstring> // C-style string library
int main()
{
    using namespace std;
    char charr[20];
    string str;
    cout << "Length of string in charr before input: "
    << strlen(charr) << endl;
    cout << "Length of string in str before input: "
    << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20); // indicate maximum length
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str); // cin now an argument; no length specifier
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
    << strlen(charr) << endl;
    cout << "Length of string in str after input: "
    << str.size() << endl;
    return 0;
}