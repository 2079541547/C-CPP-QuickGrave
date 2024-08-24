#include <iostream>
using namespace std;

#ifndef HEADER_EXAMPLE_H  // 防止重复包含
#define HEADER_EXAMPLE_H

// C++ 版本的函数，用于打印字符串
void printCpp(const string& message) {
    cout << "C++: " << message << endl;
}

// C++ 版本的函数，用于打印整数
void printIntCpp(int value) {
    cout << "C++: " << value << endl;
}


// C 版本的打印函数
void printC(const char *message) {
    printf("C: %s\n", message);
}

// C 版本的打印整数函数
void printIntC(int value) {
    printf("C: %d\n", value);
}

#endif // HEADER_EXAMPLE_H