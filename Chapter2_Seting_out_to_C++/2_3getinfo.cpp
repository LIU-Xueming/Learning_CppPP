// getinfo.cpp -- input and output

// 笔记

// cin 与 cout 相似，cin 用于输入

// 类是用户定义的一种数据类型。
// 要定义类，需要描述它能 表示什么信息 和  可对数据执行哪些操作
//***
//  类之于对象，就像类型之于变量
//***
// 类描述指定了可对类对象执行的所有操作。
// 要对特定对象 执行 这些允许的操作，需要给该对象发送一条消息。
// C++提供了两种 发送消息 的方式：
// 1. 使用 类方法，即 函数调用
// 2. 重新定义运算符，cout、cin就是使用这种方式。

#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;

    cin.get();

    cout << "Here are 2 more. ";
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl;

    cin.get();

    return 0;
}