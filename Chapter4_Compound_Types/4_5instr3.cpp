// instr3.cpp -- reading more than one word with get() & get()

// 笔记
// 面向行的输入 get()
// 由于get()将换行符留在输入序列中
// 因此，若连续两次调用get(), 则第二次调用后时
// 将看到第一次保留的换行符，是的get()认为到达行尾，因为未发现实际我们需要的内容

// 但是，cin.get()不带任何参数的形式，可以读取下一字符，因此可以用来，处理换行符
// cin.get(name1, size);
// cin.get();
// cin.get(name2, size);
// 也可以将两个类成员函数拼接合并使用：
// (这是由于，cin.get 之后的返回值，也是 cin 的一个对象)
// cin.get(name1, size).get();
// 同样的对于getline()也可以合并，使得读取输入中连续的两行
// cin.getline(name1, size).getline(name2, size);

// C++允许函数有多个版本，前提是 参数列表不同
// 编译器 根据 参数列表的 不同来判断使用哪种具体的版本
// 这种特性叫做  函数的重载

// 相比于getline()，get()可以使输入更仔细，可以用来检查由于数组被填满还是由于换行符而停止读取
// 如果是由于数组被填满，则在使用get()时，将得到的不是 换行符，而是某个字符！！！

// 空行问题
// 当读取空行时，get()将设置失效位，使接下来的输入被阻断，可以用 cin.clear()来恢复

#include <iostream>
int main()
{
    using namespace std;
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];

    cout << "Enter your name:\n";
    cin.get(name, Arsize).get();
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, Arsize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}