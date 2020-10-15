// Oct.15.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main()
{
    double pi = 3.1415926;
    double r = 3.5, 
           h = 4;
    double s1, s2, s;

    s1 = pi * r * r;
    s2 = 2.0 * pi * r * h;
    s = 2.0 * s1 + s2;
    
    printf("Area = %f\n", s);

    return 0;
}

