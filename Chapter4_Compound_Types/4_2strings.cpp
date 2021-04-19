// strings.cpp -- storing strings in an array

// 笔记
// 字符串：存储在内存中的一系列字符
// C++处理字符串的方式有两种，一种基于C语言，另一种基于string类库

// 利用char数组存储字符串，必须以 空字符 结尾，即 \0 结尾
// 例：char cat[4] = {'w','e','r','\0'};
// 还可以使用 字符串常量的方式表示字符串，即用 双引号 括起
// 例： char fish[] = "Afish";
// 还要注意，此时 不写出 \0 不是说没有 \0 ，而是隐式大的包括了
// 程序会自动在末尾补充上空字符
// 要确保数组足够大，使能够存储字符串中的所有字符，包括空字符
// 在确定存储字符串所需的最短数组时，一定记住结尾的空字符也计算在内

// 注意！！！！！！双引号 与 单引号  不能互换
// 因为 “S” = 'S' + '\0' 而 'S' = 'S'
// 并且，更关键的是，“S"实际上表示字符串所在的内存地址！！！！！！

// 字符串常量的拼接
// 将两个双引号的字符串连成一个，且第一个的空字符将被第二个字符串第一个字符代替
// cout << "ew e r fdf " "sdfsdfer fdsf";

// 在数组中使用字符串
// 将字符串存储到数组中最常用有两种方法：
// 1. 将数组初始化为字符串
// 2. 将键盘、文件输入读取到数组中

// strlen()函数
// 这是标准C语言库函数，用以确定字符串中字符个数（不包括空字符）
// 需要添加头文件 cstring
// 如果要存储某个字符串 strings，则数组长度不能短于 strlen(strings)+1

// 通过对某个字符串 某 个位置的字符 置为 空字符的方式，可以截断字符串
// name2[3] = '\0'; // set to null character

#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";
    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << " bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0'; // set to null character
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;
    return 0;
}