// strtype3.cpp -- more string class features

// 笔记
//
// C语言库中有函数可以完成使用string类的相应的功能, 头文件<cstring>提供了这些函数
// 用strcpy()将字符串复制到字符数组中
// strcpy(charr1, charr2); // 将 charr2 复制到 charr1中
// 用strcat()将字符串附加到字符数组末尾
// strcat(charr1, charr2); // 将charr2内容添加到charr1末尾

// 对于以string类 和 C语言字符数组形式的  字符串
// 分别对应不同的确定字符串中字符数的方法
// int len1 = str1.size();
// int len2 = strlen(charr1);
// 一个是身为对象，使用  类方法
// 一个是以自身为函数的参数，结果为返回值

#include <iostream>
#include <cstring>
#include <string>

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    // assignment for string objects and character arrays
    str1 = str2; // copy str2 to str1
    strcpy(charr1, charr2); // copy charr2 to charr1
    // appending for string objects and character arrays
    str1 += " paste"; // add paste to end of str1
    strcat(charr1, " juice"); // add juice to end of charr1
    // finding the length of a string object and a C-style string
    int len1 = str1.size(); // obtain length of str1
    int len2 = strlen(charr1); // obtain length of charr1
    cout << "The string " << str1 << " contains "
    << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
    << len2 << " characters.\n";
    return 0;
}