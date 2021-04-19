// adsress.cpp -- using the & operator to find addresses

// 笔记
// 指针 与 自由存储空间
// *********************************
// 计算机程序在存储数据时，必须要的3种基本属性：
// 1. 信息存储在何处
// 2. 存储的值为多少
// 3. 存储的信息是什么类型

// 实现以上目的的一种方式是定义一个简单变量
// 另一种方式是  指针
//**********************************************

// 指针是一个变量
// 其存储的是值的地址，而不是值本身

// 对于常规变量的地址，只需要对变量应用地址运算符& ，就可以获得其位置

// 在显示地址时，cout将以十六进制的表示法


#include <iostream>
int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
// 有时 需要使用 unsigned (&donuts);
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    return 0;
}