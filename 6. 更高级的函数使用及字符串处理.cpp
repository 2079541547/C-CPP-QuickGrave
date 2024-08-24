#include <iostream>  // 引入C++的标准输入输出库
#include <cstdio>    // 引入C语言的标准输入输出库
#include <cstring>   // 引入C语言的字符串处理库

using namespace std; // 告诉编译器使用std命名空间

// 1. 定义一个递归函数，用于计算阶乘
// 函数原型声明
unsigned long long factorial(unsigned int n);

// 2. 定义一个函数指针类型
typedef void (*VoidFuncPtr)(const char *);

// 3. 定义一个函数，使用函数指针作为参数
// 函数原型声明
void printHelloWorld(VoidFuncPtr func);

// 4. 定义一个函数，用于打印字符串
// 函数原型声明
void printString(const char *str);

// 5. 定义一个函数，用于复制字符串
char *copyString(const char *source);

// 1. 定义factorial函数
// 此函数接受一个无符号整型参数n，并返回n的阶乘
unsigned long long factorial(unsigned int n) {
    if (n <= 1) {
        return 1;  // 递归终止条件
    } else {
        return n * factorial(n - 1);  // 递归调用
    }
}

// 2. 定义printHelloWorld函数
// 此函数接受一个函数指针func作为参数，并调用该函数
void printHelloWorld(VoidFuncPtr func) {
    func("Hello, World!");  // 调用传入的函数指针
}

// 3. 定义printString函数
// 此函数接受一个字符指针str作为参数，并打印该字符串
void printString(const char *str) {
    cout << str << endl;  // C++风格的打印
    printf("%s\n", str);  // C风格的打印
}

// 4. 定义copyString函数
// 此函数接受一个字符指针source作为参数，并返回一个新的复制后的字符串
char *copyString(const char *source) {
    size_t length = strlen(source);  // 获取字符串长度
    char *destination = new char[length + 1];  // 动态分配内存
    strcpy(destination, source);  // 复制字符串
    return destination;  // 返回新字符串
}

// C风格的复制字符串函数
char *copyStringC(const char *source) {
    size_t length = strlen(source);  // 获取字符串长度
    char *destination = (char *)malloc((length + 1) * sizeof(char));  // 动态分配内存
    if (destination != NULL) {
        strcpy(destination, source);  // 复制字符串
    }
    return destination;  // 返回新字符串
}

int main() {
    // 1. 调用factorial函数
    unsigned int num = 5;
    unsigned long long result = factorial(num);  // 调用factorial函数
    cout << "阶乘 " << num << "! 的结果为: " << result << endl;

    // 2. 使用函数指针
    VoidFuncPtr myFunc = printString;  // 创建函数指针
    printHelloWorld(myFunc);  // 调用printHelloWorld函数，传递函数指针

    // 3. 复制字符串
    const char *originalStr = "Original string";
    char *copiedStr = copyString(originalStr);  // 调用copyString函数
    cout << "原始字符串: " << originalStr << endl;
    cout << "复制后的字符串: " << copiedStr << endl;

    // 使用C风格的复制字符串函数
    char *copiedStrC = copyStringC(originalStr);  // 调用copyStringC函数
    cout << "C风格复制后的字符串: " << copiedStrC << endl;

    // 清理动态分配的内存
    delete[] copiedStr;  // C++风格的内存清理
    free(copiedStrC);    // C风格的内存清理

    // 返回0表示程序成功结束
    return 0;
}