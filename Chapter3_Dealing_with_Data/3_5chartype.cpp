// chartype.cpp -- the char type

// 笔记
// ASCII字符集

// cout与cin根据数据的类型不同，控制输入与输出显示的效果
// 比如，M对应77，在cin时，cin将M理解为77
// 在cout时，将77理解为M

#include <iostream>
int main()
{
    using namespace std;
    char ch;

    cout << "Enter a character: " << endl;
    cin >> ch;
    cin.get();
    cout << "Hola!";
    cout << "Thanks for the " << ch << " character." << endl;
    cin.get();
    return 0;
}