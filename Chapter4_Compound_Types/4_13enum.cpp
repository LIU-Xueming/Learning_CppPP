// enum.cpp -- example for enum

// 笔记
// 枚举
// C++中的enum工具提供了另一种创建符号常量的工具，可以替代const
// 并且 允许定义新的类型，但有着严格的限制
// 举例
// enum spectrum {res, orange, yellow, green, blue, violet, indigo, ultraviolet};
// 上面的语句，创建 新的类型名称spectrum，被称为 枚举
// 将red,yellow等作为 符号常量，分别对应 0~7，这些常量被称为 枚举常量
// 默认情况下，第一个枚举量的值为0，以此类推，也可以人为修改

// 用枚举名来声明这种类型的变量
// spectrum band; // 声明变量band，类型为spectrum
// 在不强制类型转换的情况下，只能将定义的 枚举量 赋值给这个变量
// band = blue;
// band = 34948; //错误
// 枚举量 是整型，可以与 int 类型做运算
// int color = 3 + red;
// 若int值的范围有效，则可以通过  强制类型转换的方式将 int值赋给枚举变量
// band = spectrum(3);

// 可以省略 枚举类型的名称，此时 相当于 创建了常量
// enum {res, orange, yellow, green, blue, violet, indigo, ultraviolet};

// 设置枚举量的值
// enum bits{one = 1, two = 2, four = 4, eight = 8};
// 值必须为整数，可以值设定特定的值，后面的值 将默认 +1
// enum bigstep{first, second = 100, third};
// 可以创建多个值相同的枚举量
// enum {zero, null = 0, one, numero_uno = 1};
//*******************************************
// 实际上 枚举 可以认为是    给 整型变量 一个字符串表示的名字 ！！！
// 相当于  声明了 一些 整型变量
// 最终使用 cout 输出的依旧是  数字

#include <iostream>
int main()
{
    using namespace std;
    enum bits{one = 1, two = 2, four = 4, eight = 8};
    bits myflag;
    myflag = two; // bits(two) 也可
    cout << myflag;
    return 0;
}