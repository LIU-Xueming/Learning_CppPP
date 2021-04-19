// addpntrs.cpp -- pointer assition

// 笔记
// 指针、数组和指针算术
// 指针和数组基本等价的原因在于指针算术和C++内部处理数组的方式
// 对于指针而言，指针增加+1，增加的量等于它指向的类型的字节数，也就是指向下一个地址
// 对于数组而言，C++将数组名解释为 地址

// 在多数情况下，C++将数组名解释为数组第一个元素的地址
// 因此，语句 double * pw = wages; 将pw声明为指向double类型的指针
// 然后初始化为数组中第1个元素的地址

// 即，所有数组都有如下等式
// wages = &wages[0] = 数组中第1个元素的地址
// 对于数组中，比如第2个元素
// stacks[1] 编译器将看作为 *(stacks + 1)
// 第i个元素则为，
// arrayName[i] == *(arrayName + i)
// 同时，对于指针也是同理
// pointerName[i] == *(pointerName + i)

// 应注意
// 可以对指针的值进行修改，但是数组名是常量，不能修改
// 且，sizeof对数组，可以得到数组长度（总长度），对指针却是指针的长度（类型长度）

#include <iostream>
int main()
{
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

// Here are two ways to get the address of an array
//************************************************************
    double * pw = wages; // name of an array = address
    // 数组名就是地址！！！！！！！！！！
    short * ps = &stacks[0]; // or use address operator with array element
//******************************************************************************
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0]
    << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks
    << ", *(stacks + 1) = " << *(stacks + 1) << endl;
    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";
    return 0;
}