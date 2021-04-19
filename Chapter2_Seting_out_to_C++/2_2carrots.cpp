// carrots.cpp -- food processing program
// use and displays a variable

// 笔记

// 要将信息存储在计算机中，需要指出信息的 存储位置 以及 所需的内存空间
// 声明语句 int carrots 就指出了 存储类型 并提供 位置标签
// 这个语句提供了两个信息：
// 需要的内存  以及  改内存单元的名称
// 所有变量 必须声明

// 对于声明变量，C++尽可能是在首次使用变量前声明它

#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    carrots = 25;

    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;

    carrots = carrots - 1;
    cout << "Crunch. Now I have " << carrots << " carrots." << endl;

    cin.get();

    return 0;
}