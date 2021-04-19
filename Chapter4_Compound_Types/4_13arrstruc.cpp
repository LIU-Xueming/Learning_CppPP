// arrstruc.cpp -- an array of structures

// 笔记
// 结构数组：元素为结构的数组
// 此时，数组中的每个元素都是 该结构 的对象
// 并且可以调用相应的成员

// 初始化时，结合数组初始化与结构初始化的特点

// C++允许指定占用特定位数的结构成员

// 共同体（union）
// 共同体 也是一种数据格式，能够存储不同的数据类型，但是只能同时存储其中的一种
// 也就是说，一个 共同体 的对象，只能 选取 共同体中 一种数据类型 作为对象本身的数据类型

// 共同体 的声明和结构类似，举例如下：
// union one4all
// {
//        int int_val;
//        long long_val;
//        double double_val;
// };
// 使用 共同体 举例如下：
// one4all pail; // 创建一个共同体one4all的对象
// pail.int_val = 15; // 此时选择 这个对象的类型 为 int整型
// pail.double_val = 1.234; // 此时 这个对象的类型 更改为 double型
// 也就是说，要么 pail 类型为int，要么为double 或 long 只能选其一

// 共同体的用途之一：
// 当某一个数据有两种或以上的数据格式时，可以更为方便
// 比如，某一个有些商品的ID 为 名字字符串， 有的为 整型数字

/*  示例：union 的使用（与struct 相结合）
struct widget
{
    char brand[20];
    int type;
    union id
    {
        long id_num;
        cahr id_char[20];
    } id_val;
};
....
widget price;
...
if (price.type == 1)
    cin >> price.id_val.id_num;
else
    cin >> price.id_val_id_cahr;
*/
// 值得注意的是，共用体也可以省去名称，成为 匿名共同体
// 此时，id_num 和 id_char 将会被视为 price的两个成员
// 因此可以通过 price.id_num 或 price.id_char直接使用
// 这两个成员的地址相同！！！！！！！！！！！！！！！！！！！！

// 共同体常用于 节省内存，特别是在 嵌入式系统中
// 且 常用于 操作系统数据结构 或者 硬件数据结构

#include <iostream>
struct inflatable
{
    /* data */
    char name[20];
    float volume;
    double price;
};


int  main()
{
    using namespace std;
    inflatable guests[2] = 
    {
        {"Bami", 0.5, 21.99},
        {"Goge", 2000, 256.99}
    };

    cout << "The guests " << guests[0].name << " and " << guests[1].name
    << "\nhave a combined volume of "
    << guests[0].volume + guests[1].volume << " cubic feet.\n";
    return 0;
}