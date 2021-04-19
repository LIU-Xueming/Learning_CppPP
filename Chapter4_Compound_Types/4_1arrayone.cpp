// arrayone.cpp -- samll arrays of integers

// 笔记
// 复合类型：基于整型和浮点型创建的
// 在C语言符合类型的基础上，C++增添了 类 这种复合类型
// 普通的复合类型有： 数组，特殊的存储字符串的数组，结构，指针等
// 其中 new 和 delete 常用来管理数据，string类 常用于处理字符串

// 数组
// 数组array是一种数据格式，能够存储多个同类型的值
// 创建数组要使用声明语句，声明时应包含一下3点;
// 1. 每个元素的类型
// 2. 数组名
// 3. 数组中的元素个数
// 通用格式如下： typeName arrayName[arraySize];
// 需要强调以及注意的是
// 数组的长度，即元素的个数  必须  为 整型常量
// 要使数组 长度可变，可以用new运算符解决

// 将sizeof用于数组名时，得到的将是整个数组中的字节数

// 数组初始化规则
// 1. 只有在定义数组时才能使用初始化，给数组整体进行赋值
// 2. 不能将一个数组赋值给另一个数组
// 3. 可以用下标的方式分别给数组中元素赋值
// 4. 只对数组中部分进行初始化时，其他元素将默认为0
// 5. 初始化时，若[]内为空，则编译器自动计算{}内元素个数
// *********************计算数组元素个数的程序语句
// short things[] = {1, 3, 4, 5};
// int num_elements = sizeof things / sizeof (short);
// ***************************************************//
// 对于C++11，数组初始化有一下几个特点：
// 1. 等号 可以省略，如 int a[4] {1,2,3,4};
// 2. {}内可以为空
// 3. 列表初始化禁止缩窄转换！！！！！！！！！！！！！！！

// C++标准模板库STL提供了一种数组替代品 vector
// C++11中新增模板类 array


#include <iostream>
int main()
{
    using namespace std;
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5};  // 创建并同时初始化数组
    // 亦可使用 static int yamcosts[3]={} 初始化
    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents.\n";
    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";
    return 0;

}