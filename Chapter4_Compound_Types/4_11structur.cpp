// structur.cpp -- a simple structure

// 笔记
// 结构简介：
// 相比于 数组 而言，数组只能存储类型相同的多个元素
// 而 结构 可以存储类型不同的多种元素
// 并且，多个相同的结构元素  可以构成  结构数组

// 创建结构包括两步：
// 1. 定义结构描述--描述并标记能够存储在结构中的各种数据类型
// 2. 按照描述创建结构变量

// 例：公司要创建一种类型来描述其生产线上某产品的成员
// 包括 产品的名称、容量大小 和售价
// struct inflatable
// {
//    char name[20];
//    float volume;
//    double price;
// };

// struct为关键字，inflatable为标识符，是这种数据格式的名称
// 里面的每一句都是一条声明语句，都为结构成员
// 注意！！！！结束结构声明要在{}后加上分号 ； ！！！！！

// 定义结构后，就可以创建这种类型的变量
// 在C++中，可以省略关键字struct，在C中不可以
// inflatable hat; // 创建inflatable类型的变量
// 此时，可以用 . 来访问各个成员变量

// 结构声明的位置  很重要
// 放在 函数 外面的声明，称为 外部声明
// 外部声明 可以被其后任何函数使用，而内部声明只能在该声明所属的函数内部使用
// 通常使用外部声明

// 变量也可以在函数的内部或外部定义
// 外部变量 由所有函数共享，但是C++不提倡使用外部变量

// 结构初始化方式 使用逗号分隔，并{}括起
// 每个结构成员 看作是 相应类型的变量，使用方式同对应变量一致

// 使用C++11的初始化，可以省略等号 = 
// 且 不允许缩窄转换，内容为空时，默认被设置为0

//********************************************
// 结构可以将 string 类作为成员，但是需要 #include <string>
// 且需要提前使用 using namespace std; 或者使用 std::string;
// 例如：
// #include <string>
// struct inflatable {std:: string name; float volume; double price;};

#include <iostream>
struct inflatable
{
    /* data */
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",
        1.88,
        29.99
    };
    inflatable pal = {"Auda Arthur", 3.12, 32.99};
    // 有些编译器要求加上static关键字进行初始化，如 static inflatable guest = ......

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    return 0;
}