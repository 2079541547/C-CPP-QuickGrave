#include <iostream>

using namespace std;

// 使用内联汇编实现一个简单的加法函数
int add(int a, int b) {
    int result;
    // 内联汇编代码
    __asm__ (
        "movl %1, %%eax; \n\t"   // 将第一个参数移动到寄存器EAX
        "addl %2, %%eax; \n\t"   // 将第二个参数加到EAX
        "movl %%eax, %0;"        // 将EAX的结果移动到result变量
        : "=r"(result)           // 输出约束
        : "r"(a), "r"(b)         // 输入约束
        : "%eax"                 // 寄存器clobber列表
    );
    return result;
}

// 使用内联汇编实现一个简单的乘法函数
int multiply(int a, int b) {
    int result;
    // 内联汇编代码
    __asm__ (
        "imull %2, %1; \n\t"     // 将第二个参数乘以第一个参数
        "movl %1, %0;"           // 将结果移动到result变量
        : "=r"(result)           // 输出约束
        : "r"(a), "r"(b)         // 输入约束
        : "%eax", "%edx"         // 寄存器clobber列表
    );
    return result;
}

// 主函数
int main() {
    // 使用内联汇编实现的加法函数
    int sum = add(10, 20);
    cout << "10 + 20 = " << sum << endl;

    // 使用内联汇编实现的乘法函数
    int product = multiply(10, 20);
    cout << "10 * 20 = " << product << endl;

    // 返回0表示程序成功结束
    return 0;
}