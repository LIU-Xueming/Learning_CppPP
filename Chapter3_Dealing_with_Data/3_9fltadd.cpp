// fltadd.cpp -- precision problem with float

// 笔记
// 浮点数运算速度较整数而言更慢，且精度降低

#include <iostream>
int main()
{
    using namespace std;
    float a = 2.34E+22f;
    float b = a + 1.0f;
    cout << "a = " << a << endl;
    cout << "b - a = " << b -a << endl;
    cin.get();
    return 0;
}