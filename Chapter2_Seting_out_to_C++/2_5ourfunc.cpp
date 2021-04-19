// ourfunc.cpp -- defining my own function

// 笔记
// 定义simon的源代码在main后面
// main()函数的返回值，不是返回给程序的其他部分
// 而是返回给操作系统
// 
// 在windows命令行批处理文件时，可以用此特征


#include <iostream>
void simon(int);    // function prototype for simon()函数原型

int main()
{
    using namespace std;
    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    cin.get();
    simon(count);
    cout << "Done!" << endl;
    cin.get();
    return 0;
}

void simon(int n)   // define the simon() function
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;
    // 由于返回值为空，因此不用return
}