// bondini.cpp -- using escape sequences

// 笔记
// 对于char 常用单引号将字符括起，代表了 字符的数值编码
// 比如，ASCII编码中 'A'为65，'5'为53，''为32
// 使用这种方法使更清晰，同时避免不同编码方式导致的 数值编码不同的问题
// 有些字符不能直接通过键盘输入，比如回车
// 因此C++提供 转义序列 来进行特殊表示，如\n表示换行
// 此时 \n 的整体 相当于 A，因此 要用单引号括起，'\n'，或双引号也行"\n"

// 针对不同语言，如法语Éà等，使用通用字符名，cout也可以输出

// char 也分 有无符号，即 signed char, unsigned char
// 当程序要处理的字符集  无法用一个8位字节表示时，有 wchar_t 是一个扩展字符集
// C++11 又增加了 char16_t 和 char32_t

// bool 型，布尔变量的值  可以是 true 和 false

#include <iostream>
int main()
{
    using namespace std;
    cout << "\aOperation \"HyperHype\" is now activated!\n";    // \a为蜂鸣
    cout << "Enter your agent code:______\b\b\b\b\b\b\b\b";     // \b为退格
    long code;
    cin >> code;
    cout << "\aYou entered " << code << " ...\n";
    cout << "\aCode verified! Proced with Plan Z3!\n";
    cin.get();
    return 0;
}