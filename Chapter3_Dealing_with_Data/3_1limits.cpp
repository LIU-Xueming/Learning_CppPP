// limits.cpp -- some integer limits

// 笔记
// OOP本质是设计并扩展自己的数据类型。
// C++自身有内置的数据类型，分为两组：
// 基本类型 和 复合类型
// 基本类型 有 整数 和 浮点数，它们又有自身的多种变体
// 复合类型 有 数组、字符串、指针、结构

// 为把信息存储在计算机中，程序必须记录3个基本属性
// 1. 信息存储在哪里
// 2. 要存储什么值
// 3. 存储何种类型的信息
// 声明语句 直观的表示后两者，而地址可以通过指针获取

// 变量名 以 下划线 或 双下划线 打头时要注意，原则是作为实现使用的

// C++ 整型分别有 char, short, int, long, long long
// 每个都有  有无符号 两种形式，因此共10种

// 1字节byte = 8位bit

// 头文件 climits 中定义了表示各种限制的符号名称，如 INT_MAX, CHAR_BIT等

// 关于sizeof的使用规则，对于 类型名 与 变量名  不同，类型名要加括号，变量名不用，具体见代码

// 符号常量的预处理器方式
// 即，形如     #define INT_MAX 32767
// #define 与 #include 一样是预处理器，且 #define是旧式C语言中使用的创建符号常量的方法
// C++中常使用关键字 const 来实现

// 初始化 是将 赋值 与 声明 合并在一起
// 可以避免声明一个变量瞬间的值是不确定的
// 初始化方式：
// int a=5;
// int b=a;
// int c(5);
// 对于C++11
// int a={5};
// int a{5}
// int b{} //大括号内为空，初始化值为0
// int b={}
// 使用大括号方式是为了作为一种通用初始化语法，可以针对各种类型数据的初始化
// 并且可以防范类型转换错误

#include <iostream>
#include <climits>

int main()
{
    using namespace std;

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << "  bytes." << endl;
    cout << "long long is " << sizeof (n_llong) << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimum int value = " << INT_MIN  << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    cin.get();
    return 0;
}