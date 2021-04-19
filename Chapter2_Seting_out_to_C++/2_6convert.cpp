// convert.cpp -- converts stone to pounds

// 笔记
// 当将using指令放在函数外面且函数前面时，将避免重复在不同函数中using相同的namespace
// 当前让程序访问命名空间std的方法有4种：
// 1. using namespace std; 放在函数定义之前，所有函数都能使用其中元素
// 2. using namespace std; 放在特定函数定义中，只有该函数可以使用其中元素
// 3. 在特定函数中，使用 using std::cout; 这样的类似指令，使得使用指定元素
// 4. 完全不使用using，在需要使用名称空间std中的元素时，使用前缀std:: ，如std::cout即可

// 要有良好的命名习惯

#include <iostream>
int stonetolb(int);     // funtion prototype
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    cin.get();
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    cin.get();
    return 0;
} 

int stonetolb(int sts)
{
    return 14*sts;
}