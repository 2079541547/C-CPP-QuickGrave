/*
    这是编程最基础的，也是开始的
*/


#include <iostream>      // 引入C++的标准输入输出库
#include <cstdio>        // 引入C语言的标准输入输出库

using namespace std;     // 告诉编译器使用std命名空间，这样可以简化代码

int main() {
    // C++ 风格的打印
    // std::cout 是 C++ 中的标准输出流对象
    // 使用 << 运算符将数据发送到标准输出流（通常是控制台）
    // endl 是一个特殊标识符，它会插入一个换行符并刷新输出缓冲区
    cout << "Hello, World! (C++)" << endl;

    // C 风格的打印
    // printf 是 C 语言中的标准输出函数
    // 它允许使用格式化字符串来输出数据
    // "%s" 是一个格式化标识符，表示字符串
    // "\n" 是一个换行符
    printf("Hello, World! (C)\n");

    // 返回0表示程序成功结束
    // 主函数必须返回一个整数，通常返回0表示正常结束
    return 0;
}

