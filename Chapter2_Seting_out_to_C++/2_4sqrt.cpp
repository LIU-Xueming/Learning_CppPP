// sqrt.cpp -- using the sqrt() function

// 笔记

// C++函数有两种：有返回值的和无返回值的
// 函数原型-->只描述函数接口-->包含在头文件中
// 函数定义-->包含函数的代码-->在库文件中

// 编译器在编译程序时，必须在库文件中搜索要使用的函数
// 且，编译器倾向于给函数名添加下划线前缀，以提示它们对
// 程序具有最后的发言权

// C++允许在创建变量的时候对它进行赋值
// 如，double side = sqrt(area)
// 此时，这个过程叫做   初始化 initializ
// 初始化  与  声明、赋值 有区别

// 有些函数需要多个参数，参数间用逗号隔开
// 有些函数不接受任何参数，如，int rand(void);
// 有些参数没有返回值，如，void bucks(double);

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    cin.get();
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
    cin.get();
    return 0;
}
// 编译时 出错：undefined reference to 'WinMai@16'
// collect2.exe: error: ld returned 1 exit status
// 因为main()函数名字写错了!!!!!