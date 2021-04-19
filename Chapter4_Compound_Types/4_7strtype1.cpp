// strtype1.cpp -- using the C++ string class

// 笔记
// C++98标准添加了 string 类，可以使用 string类的对象来存储 字符串
// 要使用 string类，必须要包含头文件 <string>
// 且，由于string类位于  名称空间 std 中，因此
// 必须 using namespace std; 或者 使用 std::string

// C++11允许将列表初始化用于string对象
// string data = {"sdfds sdf sdfdsewrf"};

#include <iostream>
#include <string>
int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jajuar";
    string str1;
    string str2 = "panther sssss";

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1; // use cin for input
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
    << str1 << " " << str2 // use cout for output
    << endl;
    cout << "The third letter in " << charr2 << " is "
    << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
    << str2[2] << endl; // use array notation
    return 0;
}