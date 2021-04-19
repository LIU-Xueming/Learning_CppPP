// exceed.cpp -- exceeding some integer limits

// 笔记
// 变量有上下限限制，上溢和下溢时，程序往往会出错
// 需要节省空间时，用short

#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    cout << sam << " and "<< sue;
    sam = sam + 1;
    sue = sue + 1;
    cout << sam << " and.\n" << sue;
    sam = ZERO;
    sue = ZERO;
    cout << " Take 1 from each." << endl << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    cout << sam << " " << sue;
    cin.get();
    return 0;

}