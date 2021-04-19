// pointer.cpp -- first pointer variable

// 笔记
// 指针与C++基本原理
// 面向对象OOP与传统的过程性编程的区别在于，OOP强调在运行阶段而不是在编译阶段进行决策
// 使用OOP可以在运行阶段确定数组的长度，而不需要在编译之前提前设定好
// 因此，OOP必须在允许在程序运行时创建数组
// 在C++中采用的方法是，使用关键字new请求正确数量的内存以及使用指针来跟踪新分配的内存的位置
 
// 使用常规变量时， 值是指定的量， 而地址为派生量
// 而处理存储数据的新策略--指针，恰好相反
// 将地址视为指定的量，而将值视为派生量
// 一种特殊类型的变量 ---- 指针  用于存储 值的地址
// 因此，指针名 表示的是 地址
// 将运算符 * （间接值或解除引用运算符） 应用于指针，就可以得到该地址所存储的值

//****************************************************************
// 假设  P 是一个指针，即 把某一个地址  命名 为 P
// &P则表示一个地址， *P表示存储在该地址的值
// *P与常规int变量等效
// 换句话说，把  某个地址0xffffff 取个名字叫做 P
// 在这个地址里，存储了一个数，这个数本身可能也有一个自己的名字，比如叫a
// 就算 我不知道 这个数叫做 a，我也可以通过 *P 的方法操作这个数
// *********************************************************************

//**********************************************************************
// int变量 和 指针变量 只是同一硬币的两面
// int jumbo = 23;
// int *p = &jumbo;
// jumbo 和 *p 都表示值
// &jumbo 和 p 都表示地址
// 其中，int *p = &jumbo; 应当理解为：
// int *(p = &jumbo); 

// 下面程序也有相关说明

#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;
    int *p_updates;
    p_updates = &updates; // 声明了一个 整型 变量，这个变量的名字叫做 updates
    // 这个变量的值 是 6，这个变量的地址是 0x?????? ，这个地址可以用 &updates得到
    // 现在 对一个地址 0x?????? 命名，叫做 p_updates
    // *运算符  能够得到 这个叫 p_updates 地址所存储的值，这个值是个int整型的数据
    // 因此，通过int *p_updates来初始化
    // 接着，将 &updates 的这个地址 的名字 命名为 p_updates，使得 相联系起来

    // express values two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;
    // express address two ways
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
    // use pointer to change value
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    return 0;
}