// arraynew.cpp -- using the new operator for array

// 笔记
// 内存有可能被耗尽，C++提供了检测并处理异常的工具
// 在C++中，值为0的指针被称为 空指针（null pointer）
// C++确保 空指针 不会指向有效的数据，因此常用 空指针 检测异常

// 使用delete释放内存
// 使用完内存后，通过delete运算符归还内存
// 使用delete时，后面加上指向内存块的指针
// int *ps = new int;
// .........use the memory
// delete ps;  //free memory
//*************************************************
// 这将释放ps指向的内存，但是不会删除指针ps本身！！！！！！！！！
// 因此，可以将 ps重新指向新的内存块
// 一定要配对使用new 和 delete, 且已经被 delete的内存，将不可以再delete
// 否则将出现未知错误

// 使用new来创建动态数组
// 通常对于大型数据（数组、字符串、结构）应使用new
// 静态联编static binding：在编译时分配内存空间
// 动态联编dynamic binding：在运行阶段需要时则创建，此时创建的数组称为 动态数组
// 1. 使用new创建动态数组
// int * psome = new int [10];
// new运算符返回第一个元素的地址，然后赋给psome
// 使用完后应用delete释放
// delete [] psome;

// 使用new和delete应满足如下原则
// ·不要用delete来释放不是new分配的内存
// ·不要用delete释放同一内存块两次
// ·若使用new[]分配，则应用delete[]释放
// ·若使用new为一个实体分配，则应用delete释放
// ·对空指针应用delete是安全的

// 2. 使用动态数字
// 只用将指针当作数组名使用即可
// 即psome[0], psome[1]等。。。

#include <iostream>
int main()
{
    using namespace std;
    double * p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 + 1;    // 数组名和指针之间的根本差别在于
    // 不能对数组名的值进行修改，但是指针是变量，可以进行修改运算
    // 在这里+1的操作使得，指针由指向的第一个值移向了下一个值
    cout  << "Now p3[0] is " << p3[0] << " and ";
    cout  << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;    // 为了正确释放内存，将指针移回原位
    delete [] p3;
    return 0;
}