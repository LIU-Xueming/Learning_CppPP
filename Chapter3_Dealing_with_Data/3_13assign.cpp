// assign.cpp -- type changes on initialization

// 笔记
// C++自动处理一些类型转换，情况有3：
// 1. 将一种算数类型的赋值 给 另一种算数类型的变量时
// 2. 表达式中包含不同的类型时
// 3. 将参数传递给函数时

// 1. 初始化和赋值进行的转换
//      注意当由 “多字节” 的类型 向 “少字节”的类型 进行转换时，会有潜在问题
// 2. 以{}方式初始化时进行的转换（C++11）
//      {}的初始化，常用于给复杂数据类型提供值列表，此时对类型转换更严格
// 3. 表达式中的转换
//      整型提升，针对整型，提升为int
// 4. 传递参数时
// 5. 强制类型转换
//      强制类型转换的格式有两种：
//          typeName (value)
//          (typeName) value
//      强制类型转换不会改变数据本身，而是创建一个新的、指定类型的值
//      例如：cout << int('Q') 显示Q的整数代号值
// C++还引入了4个强制类型转换运算符，对它们使用要求更为严格
// 其中 static_cast<typeName> (value)可以将一种数值类型转换为另一种

#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3; // int converted to float
    int guess(3.9832); // double converted to int
    int debt = 7.2E12; // 系统会显示：Warning: result not defined in C++
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    return 0;
}