#include <iostream>  // 引入C++的标准输入输出库
#include <cstdio>    // 引入C语言的标准输入输出库

// 包含头文件
#include "14. 宏与头文件（头文件）.hpp"


// 定义宏，用于计算两个数的最大值
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// 主函数
int main() {
    // C++ 版本的打印函数
    printCpp("Hello from C++!");

    // 使用 C 版本的函数
    printC("Hello from C!");

    // 使用 C 版本的打印整数函数
    printIntC(12345);

    // 使用 C++ 版本的打印整数函数
    printIntCpp(54321);

    // 使用宏计算最大值
    int maxVal = MAX(10, 20);
    cout << "最大值为: " << maxVal << endl;

    // 返回0表示程序成功结束
    return 0;
}