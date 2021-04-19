// assgn_st.cpp -- assigning strutures

// 笔记
// 结构的其他属性
// 结构可以作为参数传递给函数，也可以让函数返回一个结构

// 结构可以赋值给另一个同类型的结构

// 可以同时完成定义结构 和 创建结构变量， 只需要将 变量名 放在结束括号之后，分号之前即可
// struct perks
// {
//      int key_number;
//      char car[12];
// } mr_smith, ms_jones;
// 但是，一般尽可能少用

// 还可以声明没有名称的结构类型，但是一般也不使用
// struct // no tag
// {
//     int x; // 2 members
//     int y;
// } position; // a structure variable

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
    inflatable bouquet = {"sunflowers", 0.20, 12.49};

    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;
    choice = bouquet; // assign one structure to another
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    return 0;
}
