// init_ptr.cpp -- initialize a pointer

// 笔记
// 声明和初始化指针
// 计算机需要跟踪指针指向的值的类型
// 指针声明必须指定指针指向的数据类型

// 例如：int *p_updates;
// 这表明，*p_updates为int类型
// 换句话说，p_updates指向int类型
// 还可以说，p_updates的类型是指向int的指针，或int*

// 传统的C语言 使用
// int *ptr;   强调*ptr是一个int类型
// 而C++常使用
// int* ptr;   强调int*是一种类型--即，指向int的指针
// 这两种是相同的，只是格式不同

//**********************************************
// 例子
// int ducks = 12;
// int *birddog = &ducks;
// 在底层具体的实现，如下
// 创建ducks变量，将值存储在该变量中，存储的地址（假设是）0x1000
// 然后创建birddog变量，并且将ducks的地址存储在这个变量中，而birddog变量的地址
// （假设是）0x1008，要注意的是ducks的地址与birddog的地址是不同的，只是将ducks的
// 地址存储在一个名叫 birddog的变量中
//*****************************************************

// 例如
// double *tax_ptr;
// char *str;
// 强调，虽然指向两种不同长度的数据类型，但是这两个变量本身的长度通常是相同的
// 可以在声明语句中初始化指针
// 此时，被初始化的是指针，而不是它指向的值
// 即，将birddog的值设置为&ducks，而不是*birddog

#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int *pt = &higgens;

    cout << "Value of higgens = " << higgens;
    cout << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt;
    cout << "; Value of pt = " << pt << endl;
    return 0;
}