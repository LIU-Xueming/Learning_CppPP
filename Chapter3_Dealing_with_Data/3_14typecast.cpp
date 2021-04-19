// typecast.cpp -- forcing type changes

// 笔记
// C++11中有一个工具能够根据  初始值的类型推断变量的类型 --auto
// 在初始化声明中，如果使用关键字auto，而不指定变量的类型，则编译器将
// 变量的类型设置成与初始值相同：
// auto n = 100;
// 实际运用中，在简单的定义时，不适用auto关键字
// 而是在处理复杂类型时，如标准库模块（STL）中的类型时，才较多的使用auto
// ****************例如：
// 在以往的标准中C++98
// std::vector<double> scores;
// std::vector<double>::iterator pv = scores.begin();
// 而在C++11中可以写作
// std::vector<double> scores;
// auto pv.scores.begin(); 
// iterator --- 迭代器


#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;

    // 将float数据相加，然后结果转化为int
    auks = 19.99 + 11.99;

    // 将float数据 强制转换为int后再相加
    bats = (int) 19.99 + (int) 11.99;
    coots = int (19.99) + int (11.99);
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << "coots\n";

    char ch = 'z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;
    cin.get();
    return 0;
}