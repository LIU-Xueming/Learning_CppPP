// 说明数组表示地址的两种方式
// 从数字上说，WS



#include <iostream>
using namespace std;
int main()
{
    short tell[10];
    short (*pas)[20] = &tell;
    cout << tell << endl;
    cout << &tell << endl;
    return 0;
}