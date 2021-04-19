// floatnum.cpp -- floating-point types

// 笔记
// C++中处理符号常量的方法除 #define之外，还有使用 const关键字的方法
// 常量被初始化后，其值就固定且不允许被修改
// 对于常量，通常约定  其名称首字母大写，或者 整个名称都大写
// 通用格式如下：
// const type name = value；
// 相比于 #define，const的优点有3：
// 1. const可以明确指定类型
// 2. const可以将定义限制在特定的函数或文件中
// 3. const可以用于更复杂的类型，如数组和结构

// 浮点型是C++的第二组基本类型
// 浮点数用来表示 小数  和  很大的数
// 即  科学计数法 E或者e 也是运用浮点数
// 如 2.53E8   
// C++有三种浮点类型 ： float, double, long double
// 类型的区别在于，不同类型的数据  有效位  不同

// 默认情况下，浮点数常量都是属于 double类型
// 使用后缀F或f，则为float型
// 使用后缀L或l，则为 long double 型

#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);   // setf()方法迫使输出使用定点表示，即防止程序自动将
                                                        // 较大或较小值 切换为 E 表示，并显示小数点后6位
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;
    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;
    cin.get();
    return 0;
}