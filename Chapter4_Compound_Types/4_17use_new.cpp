// use_new.cpp -- using the new operator

// 笔记
// 指针的危险
// 强调，在C++中创建指针时，计算机将分配用来存储地址的内存
// 但是不会分配用来存储指针所指向的数据的内存

// 指针和数字
// 指针不是整型，不能够作为数字来计算，且赋值的时候，需要通过强制类型转换
// 来将整型强制转换为地址
// 例如：
// int *pt;
// pt = (int *) 0xB8000000;

// 如何使用指针来管理  运行阶段  的内存空间分配？？
// 指针只是为可以通过名称直接访问的内存提供了一个别名
// *****************************************
// 指针真正的用武之地在于，在运行阶段分配未命名的内存以储存值
// 此时，只能通过指针来访问内存
// *********************************************
// C语言中，可以用库函数 malloc()来分配内存
// 在C++中仍可使用malloc()，但C++有更好的方法----new运算符

// 使用new来分配内存
// 例：在运行阶段为一个int值分配未命名的内存，并使用指针来访问这个值
// 步骤一：程序员告诉new，需要为哪种数据类型分配内存
// 步骤二：new找到一块正确的内存，并返回这块内存的地址
// int* pn = new int;
// 其中，new int告诉程序，
// 需要合适存储int的内存，根据类型确定所需内存大小，然后找到，并返回地址
// 然后，将地址赋给pn
// 从而，使得现在pn是一处地址，*pn是存储在那里的值

// 为一个数据对象（可以是结构，也可以是基本型）获得并指定分配内存的通用格式：
// typeName * pointer_name = new typeName;

//************************************************************************
// 对于指针，需要强调的一点是，new分配的内存块通常与常规变量声明分配的内存块不同
// 变量nights与pd的值，都存储在被称为栈（stack）的内存区域里
// 而new从被称为 堆（heap）或 自由存储区 的内存区域分配内存！！！！！
// 即pt的值

#include <iostream>
int main()
{
    using namespace std;
    int nights = 1001;  // 创建一个变量
    int *pt = new int;  // 创建一个指针，分配一个地址 
    *pt = 1001;         // 给这个地址的内存存储一个值

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt <<endl;

    double  * pd = new double;
    *pd = 10000001.0;
    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    
    cout << "size of pt = " << sizeof(pt);  // pt的值是一个地址
    cout << ": size of *pt = " << sizeof(*pt) << endl;  //*pt是存储在地址中的数据
    cout << "size of pd = " << sizeof(pd);
    cout << ": size of *pd = " << sizeof(*pd) << endl;

    return 0;
}
