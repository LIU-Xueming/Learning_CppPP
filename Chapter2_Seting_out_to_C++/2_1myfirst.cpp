// myfirst.cpp -- displays a message

// 笔记

// iostream 是 输入 与 输出 必备的 头文件
// c++的 头文件 没有扩展名，而 c 的头文件以 .h 为扩展名
// 没有 h 的头文件可以包含 命名空间

// 对于iostream，要使用命名空间编译指令来使iostream中的
// 定义对程序可用

// 由于不同的公司 可能开发出同一个名字的 函数
// 为了 区别 这个函数，每个公司有自己的命名空间
// 如，函数为 want()，公司为Acompany 和 Bcompany
// 则，有 Acompany::want() 和 Bcompany::want()之分

// 而对于C++，类、函数、变量等都是标准组件，都被放在命名空间 std 中
// 因此，在iostream中定义的 cout 以及 endl 等，实际上是
// std::cout 与 std::endl
// 在进行 using namespace std 后，就不用每个 函数 都加上 std::

// 初识  重载运算符
// 插入运算符 << 就是一个重载运算符
// 通过重载，可以使 同一个运算符 有不同的含义
// 编译器 将通过上下文来确定运算符的含义

// endl 表示重启一行，使得屏幕光标移到下一行开头
// 亦可以使用 换行符 \n 来达到换行的目的

#include <iostream>
int main()
{
    using namespace std;
    cout << "Come up and C++ me some time.";
    cout << endl;   //另起一行
    cout << "You won't regret it!" << endl; // more output

    cin.get();  // 保持终端窗口打开，直到输入按键

    return 0;   // 终止main()函数
}