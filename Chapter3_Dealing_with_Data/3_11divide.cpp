// divide.cpp -- integer and floating-point division

// 笔记
// 运算符优先级和结合性
// 除法运算符（/）的行为取决于操作数的类型
// 浮点数默认下为double型
// C++在对不同类型进行运算时，会进行自动转换为同一类型

// 在这里，除法运算符 表示了 3种不同的运算！！！！！！
// 有int除法，double除法，float除法！！！！
// 因此这里的除法运算符 是一种 重载运算符！！！！

#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer division: 9/5 = " << 9/5 <<endl;
    cout << "Floating-point division: 9.0/5.0 = " << 9.0/5.0 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0/5 << endl;
    cout << "double constants: 1e7/9.0 = " << 1.e7/9.0 << endl;
    cout << "float constants: 1e7f/9.0f = " << 1.e7f/9.0f << endl;
    cin.get();
    return 0;
}