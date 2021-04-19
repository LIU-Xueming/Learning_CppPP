#include <stdio.h>
#include <iostream>

int main()
{
    char  s[6] = "rdwda";
    int a = 2345678;

    sprintf(s,"%04d",a);
    std::cout << s << "---" << a << std::endl;
    return 0;

}