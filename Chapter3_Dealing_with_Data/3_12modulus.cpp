// modulus.cpp -- use % operator to convert 1bs to stone

// 笔记
// 只针对 整数除法
// 尤其适用于将 一个量分为不同的整数单元的问题

#include <iostream>
int main()
{
    using namespace std;
    const int Lns_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    cin.get();
    int stone = lbs / Lns_per_stn;
    int pounds = lbs % Lns_per_stn;
    cout << lbs << " pounds are " << stone << " stone, " << pounds << "pounds.\n";
    cin.get();
    return 0;
}